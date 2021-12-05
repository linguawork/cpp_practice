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
с 10 минуты видео хороший пример реализации указателя на разные функции коллег
*/
std::string DataFromDataBase()
{
	return "Data from DB";
}


std::string DataFromWebServer() 
{
	return "Data from Web server";
}

 void Show_different_functions(bool isFromDB) //или true or false
 // general manager gathers the data from
 //different functions made by his colleages separately
{

	if (isFromDB) // if true
		std::cout << &DataFromDataBase << std::endl;
	else // if false
		std::cout << &DataFromWebServer << std::endl;

}

//тип функции (*ptr_name)(принимаемые типы данных)

int main()
{
	Show_different_functions(false); // должна выводить сообщения но не выводит
	return 0;
}