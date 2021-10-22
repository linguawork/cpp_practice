/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211022-0DynamicCastRef.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:19:30 by areggie           #+#    #+#             */
/*   Updated: 2021/10/22 13:11:56 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Источник: https://ravesli.com/urok-171-dinamicheskoe-privedenie-tipov-operator-dynamic_cast/#toc-4
оператор dynamic_cast также может использоваться и со ссылками.
Работа dynamic_cast со ссылками аналогична работе с указателями:


Поскольку в языке C++ не существует «нулевой ссылки», то dynamic_cast не может возвратить «нулевую ссылку» при сбое. 
Вместо этого, dynamic_cast генерирует исключение типа std::bad_cast (мы поговорим об исключениях чуть позже).
Больше информации об исключении на https://en.cppreference.com/w/cpp/types/bad_cast


NB Начинающие программисты путают, в каких случаях следует использовать static_cast, 
а в каких — dynamic_cast. Ответ довольно прост: используйте оператор dynamic_cast при понижающем приведении,
а во всех остальных случаях используйте оператор static_cast. 
Однако, вам также следует рассматривать возможность использования виртуальных функций вместо операторов преобразования типов данных.

*/


#include <iostream>
#include <string>
 
class Parent
{
protected:
	int m_value;
 
public:
	Parent(int value)
		: m_value(value)
	{
	}
 
	virtual ~Parent() {}
};
 
class Child: public Parent
{
protected:
	std::string m_name;
 
public:
	Child(int value, std::string name)
		: Parent(value), m_name(name)
	{
	}
 
	const std::string& getName() { return m_name; }
};
 
int main()
{
	Child banana(1, "Banana");
	Parent &p = banana;
	try
	{
		Child &ch = dynamic_cast<Child&>(p); // используем оператор dynamic_cast для конвертации ссылки класса Parent в ссылку класса Child

		// if (&ch) // так не бывает возврата нулевой ссылки то и проверки на ноль невозможно сделать как у указателя
		// но есть бросание исключения std::bad_cast
        // 	std::cout << "The name of the Child is: " << ch.getName() << '\n';
		
        std::cout << "The name of the Child is: " << ch.getName() << '\n';
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << e.what() << '\n';
	}
	

 
	// std::cout << "The name of the Child is: " << ch.getName() << '\n';
 
	return 0;
}