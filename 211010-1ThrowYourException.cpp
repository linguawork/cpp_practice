/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211010-1ThrowYourException.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:03:26 by areggie           #+#    #+#             */
/*   Updated: 2021/10/11 22:20:37 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://www.youtube.com/watch?v=wCUl7yTHWq8
лекция на Simple Code 123
*/

/*
Свой класс exception c++. 
Создание собственного класса исключений. 
С++ для начинающих. Урок #123

*/

/*
Этот урок к CPP day05
В продолжение лекции 120, 121, 122 о Try and Catch
*/


/*
создание собственных исключений
*/

#include <iostream>
#include <string>
#include <fstream>

// у класса exception есть лишь метод What()
// поэтому можно написать свой класс исключения для бросания
// и в нем можно прописать свои методы


/* ПЕРВЫЙ ВАРИАНТ: кидаем свой класс MyException а ловим класс exception*/
// прога вылетит не поймав
// libc++abi.dylib: terminating with uncaught exception of type MyException
// [1]    50881 abort      ./a.out

// class MyException
// {
// 	private:

// 	public:
	
	
// };

// void Foo (int value)
// {
// 	if (value < 0) 
// 		throw std::exception(); // намеренно убрал строку "Число меньше 0!!!!!" так как на Линуксе нет конструктора
// 		// принимающего char а на Винде есть

// 	if (value == 1) 
// 		throw MyException(); // бросаем cвой класс MyException с вызовом конструктора по умолчанию
// }

// int main()
// { 
// 	setlocale (LC_ALL, "ru");
	
// 	try
// 	{
// 		Foo(1); 
	
// 	}
// 	catch( std::exception &excep ) //
// 	{
// 		std::cerr << "Блок 1 Мы поймали " << excep.what() << '\n';

// 	}

// 	return 0;
// }


/* ВТОРОЙ ВАРИАНТ: кидаем свой класс MyException и ловим свой класс MyException*/
// прога сработает


// class MyException
// {
// 	private:

// 	public:
	
	
// };

// void Foo (int value)
// {
// 	if (value < 0) 
// 		throw std::exception(); // намеренно убрал строку "Число меньше 0!!!!!" так как на Линуксе нет конструктора
// 		// принимающего char а на Винде есть

// 	if (value == 1) 
// 		throw MyException(); // бросаем cвой класс MyException с вызовом конструктора по умолчанию
// }

// int main()
// { 
// 	setlocale (LC_ALL, "ru");
	
// 	try
// 	{
// 		Foo(1); 
	
// 	}
// 	catch( MyException &excep ) //
// 	{
// 		std::cerr << "Блок 1 Мы поймали " << '\n';

// 	}

// 	return 0;
// }



/* ТРЕТИЙ ВАРИАНТ: кидаем свой класс MyException и ловим  базовым (родительским) классом Exception */
// прога сработает так как MyException будет наследовать от exception


// class MyException : public std::exception
// {
// 	private:

// 	public:
	
	
// };

// void Foo (int value)
// {
// 	if (value < 0) 
// 		throw std::exception(); // намеренно убрал строку "Число меньше 0!!!!!" так как на Линуксе нет конструктора
// 		// принимающего char а на Винде есть

// 	if (value == 1) 
// 		throw MyException(); // бросаем cвой класс MyException с вызовом конструктора по умолчанию
// }

// int main()
// { 
// 	setlocale (LC_ALL, "ru");
	
// 	try
// 	{
// 		Foo(1); 
	
// 	}
// 	catch( std::exception &excep ) // так как MyException это наследник от exception то перехват возможен
// 	{
// 		std::cerr << "Блок 1 Мы поймали " << '\n';

// 	}

// 	return 0;
// }



/* ЧЕТВЕРТЫЙ ВАРИАНТ: кидаем свой класс MyException и наследуемся от базовым (родительского) класса Exception 
но ловим своим классом  MyException*/



// class MyException : public std::exception
// {
// 	private:

// 	public:
	
	
// };

// void Foo (int value)
// {
// 	if (value < 0) 
// 		throw std::exception(); // намеренно убрал строку "Число меньше 0!!!!!" так как на Линуксе нет конструктора
// 		// принимающего char а на Винде есть

// 	if (value == 1) 
// 		throw MyException(); // бросаем cвой класс MyException с вызовом конструктора по умолчанию
// }

// int main()
// { 
// 	setlocale (LC_ALL, "ru");
	
// 	try
// 	{
// 		Foo(1); 
	
// 	}
// 	catch( MyException &excep ) // так как MyException это наследник от exception то перехват возможен
// 	{
// 		std::cerr << "Блок 1 Мы поймали " << excep.what() << '\n'; // вызываем унаследованный метод what

// 	}

// 	return 0;
// }




/* ПЯТЫЙ ВАРИАНТ: кидаем свой класс MyException и наследуемся от базовым (родительского) класса Exception 
но ловим своим классом  MyException*/
// дополнительно в свой класс можно прописать свои методы

class MyException : public std::exception
{
	private:
		int dataState;

	public:
		int MyException::InsideMethod(int dataState)
		{
			this->dataState = dataState;
		}
		
		int GetDataState()
		{
			return dataState;
		}

		std::cout << "Переменная = " << value << std::endl;
	
	
};

void Foo (int value)
{
	if (value < 0) 
		throw std::exception(); // намеренно убрал строку "Число меньше 0!!!!!" так как на Линуксе нет конструктора
		// принимающего char а на Винде есть

	if (value == 1) 
		throw MyException(value); // бросаем cвой класс MyException с вызовом конструктора по умолчанию
}

int main()
{ 
	setlocale (LC_ALL, "ru");
	
	try
	{
		Foo(1); 
	
	}
	catch( MyException &excep ) // так как MyException это наследник от exception то перехват возможен
	{
		std::cerr << "Блок 1 Мы поймали " << excep.what() << '\n'; // вызываем унаследованный метод what
		std::cerr << "Состояние данных " << excep.GetDataState() << '\n'; // вызываем унаследованный метод what

	}

	return 0;
}


