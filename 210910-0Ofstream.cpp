/* https://www.youtube.com/watch?v=CBnB2fvfu_I */
// лекция на Simple Code

/* 
Работа с файлами с++. Запись в файл. 
c++ ofstream. Изучение С++ для начинающих. 
Урок #115
*/

#include <iostream>
#include <fstream>


/*
ofstream - класс  библиотеки fstream
*/




int main()
{
	setlocale (LC_ALL, "ru");
	std::string path = "text.txt";
	// std::cin >> path;
	std::ofstream fileout; // для 98 стандарта пишем std (название класса)так как не исп namespaces
	// fileout.open(path); // название файла должно быть в текст формате
	// мы можем подавать больше аргументов в бинарном формате
	// по умолчанию без флага всегда перезапись
	fileout.open(path, std::ofstream::app); // название файла должно быть в текст формате// app - флаг дозаписи

	if(!fileout.is_open()) // is_open возвращает булеву true false
	{
		std::cout << "Could not open " << fileout << std::endl;
		//return(1); // можно выходить из проги
	}
	else
	{
		std::cout << "Enter a number ";
		int a;
		std::cin >> a; // запрос ввода в переменную
	 	fileout << a << std::endl; // переменную пишем в файл
		// fileout << "\n";// и ставим нов строку
	}
	fileout.close(); // Отработали файл и должны закрыть и освободить ресурс
	return 0;
}