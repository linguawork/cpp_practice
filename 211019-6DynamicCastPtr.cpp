/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211019-6DynamicCastPtrAndRef.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:19:30 by areggie           #+#    #+#             */
/*   Updated: 2021/10/19 20:40:56 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Источник: https://ravesli.com/urok-171-dinamicheskoe-privedenie-tipov-operator-dynamic_cast/

В языке C++ оператор dynamic_cast используется именно для этого. 
Хотя динамическое приведение позволяет выполнять не только конвертацию указателей родительского класса в указатели дочернего класса, 
это является наиболее распространенным применением оператора dynamic_cast.
Этот процесс называется приведением к дочернему типу (или «понижающим приведением типа»).

Правило: Всегда делайте проверку результата динамического приведения на нулевой указатель.


Также обратите внимание на случаи,
 в которых понижающее приведение с использованием оператора dynamic_cast не работает:

   1Наследование типа private или типа protected.

   2Классы, которые не объявляют или не наследуют 
   классы с какими-либо виртуальными функциями (и, следовательно, не имеют виртуальных таблиц). В примере, приведенном выше, если бы мы удалили виртуальный деструктор класса Parent, то преобразование через dynamic_cast не выполнилось бы.

   3Случаи, связанные с виртуальными базовыми классами 
   (на сайте Microsoft вы можете посмотреть примеры таких случаев и их решения).


используйте оператор dynamic_cast при понижающем приведении, 
а во всех остальных случаях используйте оператор static_cast. 
Однако, вам также следует рассматривать возможность использования виртуальных 
функций вместо операторов преобразования типов данных.

Доп Источник Видео: https://www.youtube.com/watch?v=2S6eszwW7y8

Хороший канал (есть полезный материал по C++ и по робототехнике)
//[it-efrem] CODE & ROBOTS


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
 
Parent* getObject(bool bReturnChild)
{
	if (bReturnChild)
		return new Child(1, "Banana");
	else
		return new Parent(2);
}

int main()
{
	//Чтобы сделать программу безопасной, необходимо добавить проверку результата 
	//выполнения dynamic_cast:
	Parent *p = getObject(true);
	// Parent *p = getObject(false);// false у нас для проверки
	
	Child *ch = dynamic_cast<Child*>(p); // используем dynamic_cast для конвертации указателя класса Parent в указатель класса Child
	if (ch) // выполняем проверку ch на нулевой указатель
        std::cout << "The name of the Child is: " << ch->getName() << '\n';
	delete p;
 
	return 0;
}