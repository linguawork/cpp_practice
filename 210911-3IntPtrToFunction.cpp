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

int Function1(int a)
{
	 return a -1;
}

int Function2(int b)
{
	return b * 2;
}




//тип функции (*ptr_name)(принимаемые типы данных)

int main()
{

	int (*PtrToFunction)(int c); // прототип указателя на функцию
	// типы данных присваиваемые в функции и возвращаемые из них
	 //должны быть одинаковые в прототипе указателя на функции

	PtrToFunction = Function2; // присвоение функции к указателю
	PtrToFunction(5);// вызов функции через указатель (принимаем int)

	std::cout << PtrToFunction(5) << std::endl;

	return 0;
}