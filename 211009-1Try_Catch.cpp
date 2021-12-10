/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211009-1Try_Catch.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:19:29 by areggie           #+#    #+#             */
/*   Updated: 2021/10/11 17:55:52 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://www.youtube.com/watch?v=jCW2wRoRi0U
лекция на Simple Code 120

*/

/*
С++ try catch. Обработка исключений С++. 
try catch что это. Изучение С++ для начинающих.
Урок #120
*/

/*
Этот урок к CPP day05
Прямое отношение к обработке второго типа ошибок

Второй тип:
Ошибки, непредусмотренные логикой программера().
Здесь можно использовать (Try and Catch).
*/

/*
Обработка исключений Try Catch.
*/

#include <iostream>
#include <string>
#include <fstream>


/* ПЕРВЫЙ ВАРИАНТ КОДА*/

// int main()
// { 
// 	setlocale (LC_ALL, "ru");

// 	std::string path = "text.tx";
	
// 	std::ifstream fin; // создаем объект класса
// 	// разрабы в класс ifstream добавили свои исключения:
// 	fin.exceptions(std::ifstream::badbit | std::ifstream::failbit );
// 	// это специфика ifstream не относится к try_catch

// 	try
// 	{
		
// 		// здесь пробуем работу кода 
// 		// если все работает нормально то программа продолжает работу не заходя в секцию catch
// 		// если что-то пошло не так то прога бросает исключит ситуацию (throw exception) в блок catch
// 		std::cout << "Попытка открыть файл!" << std::endl;
// 		fin.open(path); // если файл корректный, то все сработает нормально и ошибки не будет 
// 		std::cout << "Файл успешно открыт!" << std::endl;
		
// 	} 
// 	catch(const std::exception& e) //то что отловлено показывается в классе exception  в скобках
// 	// константная ссылка на объект e типа exception
// 	{
// 		//блог catch отлавливает брошенное исключение
// 		// у объекта есть метод WHAT который и показывает что пошло не так
// 		//Этот метод возвращает строку - const char *std::exception::what() const
// 		std::cerr << e.what() << '\n'; // в классе exception уже прописаны ошибки // но можно писать  и свой класс исключения
// 		std::cout << "Ошибка открытия файла" << std::endl;

// 		// класс exception все равно отловит метод fin.exceptions(std::ifstream::badbit | std::ifstream::failbit )
// 		// класса ifstream так как исключения класса ifstream наследуются от общего класса exception
		
// 		// вместо родительского класса  (const std::exception& e) можно вызывать
// 		// специальный классы исключений н-р (const ifstream::failure& e)
// 		// см второй вариант кода ниже
// 	}
	


// 	return 0;
// }




/* ВТОРОЙ ВАРИАНТ КОДА*/

int main()
{ 
	setlocale (LC_ALL, "ru");

	std::string path = "text.tx";
	
	std::ifstream fin; // создаем объект класса
	// разрабы в класс ifstream добавили свои исключения:
	fin.exceptions(std::ifstream::badbit | std::ifstream::failbit );
	// это специфика ifstream не относится к try_catch
	// это своего рода класс exception для ошибок ifstream

	try
	{
		
		// здесь пробуем работу кода 
		// если все работает нормально то программа продолжает работу не заходя в секцию catch
		// если что-то пошло не так то прога бросает исключит ситуацию (throw exception) в блок catch
		std::cout << "Попытка открыть файл!" << std::endl;
		fin.open(path); // если файл корректный, то все сработает нормально и ошибки не будет 
		std::cout << "Файл успешно открыт!" << std::endl;
		
	} 
	catch(const std::ifstream::failure& e) //то что отловлено показывается в классе exception  в скобках
	// константная ссылка на объект e типа exception
	{
		//блог catch отлавливает брошенное исключение
		// у объекта есть метод WHAT который и показывает что пошло не так
		//Этот метод возвращает строку - const char *std::exception::what() const
		
		std::cerr << e.what() << '\n'; // в классе exception уже прописаны ошибки // но можно писать  и свой класс исключения
		std::cerr << e.code() << '\n'; // у класса ifstream есть метод code: iostream:1
		std::cout << "Ошибка открытия файла" << std::endl;

		// класс exception все равно отловит метод fin.exceptions(std::ifstream::badbit | std::ifstream::failbit )
		// класса ifstream так как исключения класса ifstream наследуются от общего класса exception
		
		// вместо родительского класса  (const std::exception& e) можно вызывать
		// специальный классы исключений н-р (const ifstream::failure& e)
		// см второй вариант кода ниже
	}
	


	return 0;
}