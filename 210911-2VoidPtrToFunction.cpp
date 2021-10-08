/* https://www.youtube.com/watch?v=_6eG9Q40lFM&t=49s */
// лекция на Simple Code

/* 
Указатель на функцию в качестве параметра. 
Передача функции в качестве параметра.
 С++ Урок #65
*/

#include <iostream>
#include <string>
#include <fstream>


/*
возможно вызывать функцию или множество функций по указателю на функцию
к дню 01 упр05 по ++
*/

void Function1()
{
	std::cout << "void Function1() was called" << std::endl;
}

void Function2()
{
	std::cout << "void Function2() was called" << std::endl;
}




//тип функции (*ptr_name)(принимаемые типы данных)

int main()
{

	void (*PtrToFunction)(); // прототип указателя на функцию
	// типы данных присваиваемые в функции и возвращаемые из них
	//должны быть одинаковые в прототипе указателя на функции

	PtrToFunction = Function1; // присвоение функции к указателю
	PtrToFunction();// вызов функции через указатель

	return 0;
}