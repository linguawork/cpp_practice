/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D04Ex00_VirtualTable.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:40:09 by areggie           #+#    #+#             */
/*   Updated: 2021/12/11 21:58:39 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
RAVESLI

https://ravesli.com/urok-167-virtualnye-tablitsy/

Урок №167. Виртуальные таблицы

*/


/*
Виртуальная таблица в языке С++ — это таблица поиска функций для выполнения вызовов функций 
в режиме позднего (динамического) связывания. Виртуальную таблицу еще называют «vtable», 
«таблицей виртуальных функций» или «таблицей виртуальных методов».

Виртуальная таблица на самом деле довольно-таки проста, хотя её сложно описать словами.

Во-первых, любой класс, который использует виртуальные функции (или дочерний класс,
 родительский класс которого использует виртуальные функции), имеет свою собственную 
 виртуальную таблицу. Это обычный статический массив, который создается 
 компилятором во время компиляции. Виртуальная таблица содержит по одной записи 
 на каждую виртуальную функцию, которая может быть вызвана объектами класса. 
 Каждая запись в этой таблице — это указатель на функцию, 
 указывающий на наиболее дочерний метод, доступный объекту этого класса.
*/



#include <iostream>

class Parent
/*
Здесь у нас есть 3 класса, соответственно, 
компилятор создаст 3 виртуальные таблицы: 
одна для Parent, одна для C1 и одна для C2.


Компилятор также добавит скрытый указатель на главный 
родительский класс с виртуальными функциями. 
Хотя компилятор делает это автоматически, 
мы покажем, где этот указатель добавляется
*/
{	
public:
	// FunctionPointer *__vptr; // здесь (см след файл картинку)
    virtual void function1() {};
    virtual void function2() {};
};
 
class C1: public Parent
{
public:
    virtual void function1() {
		std::cout << "Function1 called" << std::endl;
	};
};
 
class C2: public Parent
{
public:
    virtual void function2() {};
};

int main()
{
    C1 c1; //Поскольку c1 является объектом класса C1, то он имеет свой *__vptr, который указывает на виртуальную таблицу класса C1.
    Parent *cPtr = &c1; //создадим указатель класса Parent на объект c1

	/*
	Поскольку cPtr является указателем класса Parent, 
	то он указывает только на часть Parent объекта c1. 
	Однако, *__vptr тоже находится в части Parent, 
	поэтому cPtr имеет доступ к этому указателю. 
	Наконец, cPtr->__vptr будет указывать на виртуальную таблицу C1, 
	поскольку cPtr указывает на объект класса C1! 
	Даже если cPtr является указателем класса Parent, 
	он всё равно имеет доступ к виртуальной таблице C1.
	*/
    cPtr->function1();
}


