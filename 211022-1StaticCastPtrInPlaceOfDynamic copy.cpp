/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211022StaticCastPtrInPlaceOfDynamic copy.cp        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:19:30 by areggie           #+#    #+#             */
/*   Updated: 2021/10/22 11:21:37 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Источник: https://ravesli.com/urok-171-dinamicheskoe-privedenie-tipov-operator-dynamic_cast/#toc-4

Понижающее приведение и оператор static_cast (Указатель на Родителя переделываем в указатель на Ребенка)
Опасная операция так как не всегда такой приведение возвращает указатель на ребенка
Использовать только когда уверен в успешном возврате


Основное отличие заключается в том, что static_cast не выполняет проверку во время запуска программы, 
чтобы убедиться в том, что вы делаете то, что имеет смысл. Это позволяет оператору static_cast быть быстрее, 
но опаснее оператора dynamic_cast. Если вы будете конвертировать Parent* в Child*, то операция будет «успешной», 
даже если указатель класса Parent не будет указывать на объект класса Child


Если вы абсолютно уверены, что операция с понижающим приведением указателя будет успешна, 
то использование static_cast является приемлемым. Один из способов убедиться в этом — использовать виртуальную функцию:

*/

#include <iostream>
#include <string>
 
// Идентификаторы классов
enum ClassID
{
	PARENT,
	CHILD
	// Здесь можно добавить еще несколько классов
};
 
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
	virtual ClassID getClassID() { return PARENT; }
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
 
	std::string& getName() { return m_name; }
	virtual ClassID getClassID() { return CHILD; }
 
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
	Parent *p = getObject(true);
 
	if (p->getClassID() == CHILD)
	{
		// Мы уже доказали, что p указывает на объект класса Child, поэтому никаких проблем здесь не должно быть
		Child *ch = static_cast<Child*>(p);
		std::cout << "The name of the Child is: " << ch->getName() << '\n';
	}
 
	delete p;
 
	return 0;
}