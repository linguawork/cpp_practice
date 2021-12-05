/* https://www.youtube.com/watch?v=bTysglLJ8No&t=513s */
// лекция на Simple Code

/* 
Чтение и запись в файл с++ используя класс fstream c++.
Изучение С++ для начинающих. 
Урок #118
*/

#include <iostream>
#include <string>
#include <fstream>


/*
вместо ifstream и ofstream можно просто использовать fstream с флагами
//чтения и записи

https://www.cplusplus.com/reference/fstream/fstream/open/
https://www.cplusplus.com/reference/fstream/ifstream/is_open/
https://www.cplusplus.com/reference/fstream/fstream/close/ 
к дню 01 упр04 по ++
*/




int main()
{
	setlocale (LC_ALL, "ru");

	std::string path = "text.txt";
	std::fstream file; // создаем объект класса
	file.open(path);// объект класса имеет название существ файла
	if (!file.is_open()) // проверка на открытие файла, если он сущ
	{
		std::cout << "Could not open " << std::endl;
		//return(1); // можно выходить из проги
	}
	else
	{
		std::cout << "File opened " << std::endl;


	return 0;
}