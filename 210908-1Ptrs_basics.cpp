
/* 
Указатели c++ что это. 
Для чего нужны. Указатели c++ разыменование. 
C++ для начинающих. Урок #46
*/

/*
Основы указателей Все как в языке Си Ничего нового
*/

/* https://www.youtube.com/watch?v=n0saIDd3H-M */
// лекция на Simple Code

#include <iostream>
#include <string>

int main()
{
	int a = 5; // присвоение значения 

	int b = a; // присвоение значения 

	int *ptr_to_a = &a; // присвоение адреса переменной а указателю
	// & - оператор взятия адреса

	// double *ptr_to_a = &a; // проблема: несовп типов данных

	std::cout << "The address of a is " << ptr_to_a << std::endl;
	std::cout << "The value inside the address of a is (разыменование) " << *ptr_to_a << std::endl;

	int *ptr_to_a2 = &a; 
	std::cout << "The pointed address of a is // адрес переменной а, на который указывает указатель" << ptr_to_a2 << std::endl;

	return 0;
}