/* https://www.youtube.com/watch?v=_6eG9Q40lFM&t=49s */
// лекция на Simple Code

/* 
Указатель на функцию в качестве параметра. 
Передача функции в качестве параметра.
 С++ Урок #65
*/

#include <iostream>
#include <string>

/*
возможно вызывать функцию или множество функций по указателю на функцию
к дню 01 упр05 по ++
с 10 минуты видео хороший пример реализации указателя на разные функции коллег:
смотри 0911-5GoodExamplePtrToFunction.cpp для
*/

std::string GetDataFromDataBase()
{
	return "Data from DB";
}


std::string GetDataFromWebServer() 
{
	return "Data from Web server";
}

 void Show_different_functions(std::string (*foo) ()) // в эту функцию можно подавать 
 //указатель на функцию // параметры указателя должны быть одинаковые как в функциях

 //или true or false
 // general manager gathers the data from
 //different functions made by his colleages separately
{
		std::cout << foo << std::endl;
}

//тип функции (*ptr_name)(принимаемые типы данных)

int main()
{
	Show_different_functions(GetDataFromDataBase); // должна выводить сообщения но не выводит 1
	return 0;
}