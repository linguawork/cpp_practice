


/* https://www.youtube.com/watch?v=UsezbK-3BL0&t=60s /
// лекция на Simple Code 
// про перегрузку операторов сравнения на примере == и !=
(остальные > < >= => по аналогии)




/* 
Перегрузка оператора равенства == и не равно !=. 
Перегрузка логических операторов сравнения. 
C++ #84
*/

#include <iostream>
#include <string>

/*

к дню 02 упр00 по ++

Нужно дописать код из урока (взять пример француза)

Перегрузка оператора - это авторская реализация оператора (любого) под свои типы данных
(которые компилятор не сможет реализовать через свои встроенные функции перегрузок
операторов)
ПО сути это предоставление программисту права переделать операторы (например + или -)
под свое видение (но это работа только с типами данных которые сам программер создавал)

this -> n (= это lhs left hand side operator)
а то что подается в функцию является rhs

пример дописать из видео
*/




 /*
Пример перегрузки оператора равно = внутри класса
из Day02 ex01 



operator overloads inside class 
 
 получает на вход объект класса по ссылке (так как по ссылке быстрее работать чем по указателю)
 обращаясь непосредственно в ячейку памяти по адресу

 передаем значение в приватную переменную объекта черех указатель this
 и метод перегрузка возвращает разыменованный указатель 
 на выходе функция возвращает ссылку
 */

	Fixed & Fixed::operator = (Fixed const & rhs) 
	{
		std::cout << "Assignation operator called" << std::endl;
		this->FixedPointVal = rhs.getRawBits();// указатель класса одного объекта получит приватное значение другого объекта
		return *this;
	}


/*
Пример перегрузки оператора вывода COUT << вне класса
из Day02 ex01 

operator overloads outside class 
Пишем этот метод вне класса так как работаем со стандартным выводом
 
метод перегрузки оператора вывода в STDOUT получает на вход объект класса по ссылке 
(так как по ссылке быстрее работать чем по указателю) обращаясь непосредственно в ячейку памяти по адресу
и ОБЪЕКТ КЛАССА ostream пространства имен std стандартной библиотеки

передаем значение в объект класса ostream через оператор <<
и метод возвращает объект
на выходе функция возвращает ссылку на объект
*/


/*
https://stackoverflow.com/questions/2425906/operator-overloading-outside-class

The basic question is "Do you want conversions 
to be performed on the left-hand side parameter of an operator?". 
!!!If yes, use a free (non-member) function. 
!!!If no, use a class member.


There is an excellent discussion of this issue in Meyer's Effective C++: Item 24 is 
"Declare non-member functions when type conversions should apply to all parameters" 
and Item 46 is "Define non-member functions inside templates when type conversions are desired".
*/

std::ostream & operator << (std::ostream &outputstream,  Fixed const & rhs)
{
	outputstream << rhs.toFloat();
	return outputstream;
}
	