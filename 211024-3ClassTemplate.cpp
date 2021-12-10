/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211024-3ClassTemplate.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:47:42 by areggie           #+#    #+#             */
/*   Updated: 2021/10/24 20:44:03 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* https://www.youtube.com/watch?v=SDRMUgJwro0 */
// лекция на Simple Code

/* 
Шаблоны классов с++ примеры. 
Обобщенные классы.
Изучение С++ для начинающих. 
Урок #126
*/

/*
Суть: 
Создается класс с произвольным именем, как шаблон с шаблонным типом данных Т,
а в main, где мы объявляем объект класса, мы должны прописать <тип данных>, c 
которыми мы будем работать (можно указать не один Т)
*/


// https://elearning.intra.42.fr/notions/piscine-c-d07-templates/subnotions
// лекция в Интре у французов 


#include <iostream>
#include <string>

// Variant 1

// template <typename T> // ключевое слово template говорит, что класс MyClass будет 
// //шаблонным, a typename T - обобщенный вид данных который будет использован в классе
// // имя может быть рандомным
// class MyClass
// {
// private:
// 	T value;

// public:
// 	MyClass (T value) : value (value)
// 	{
		
// 	}
	
// 	void DataTypeSize()
// 	{
// 		std::cout << sizeof(value) << std::endl;
// 	}
// }; 


// int main()
// {
	
// 	int a = 5; 
// 	// MyClass c (a); // вот так объявить переменную не удастся так как нужно указать тип данных с которыми класс будет работать
// 	MyClass<int> c (a); // в угловых скобках можно указать тип данных
// 	c.DataTypeSize();// для int размер 4

// return 0;
// }





// Variant 2
// template <typename T> // ключевое слово template говорит, что класс MyClass будет 
// //шаблонным, a typename T - обобщенный вид данных который будет использован в классе
// // имя может быть рандомным
// class MyClass
// {
// private:
// 	T value;

// public:
// 	MyClass (T value) : value (value)
// 	{
		
// 	}
	
// 	void DataTypeSize()
// 	{
// 		std::cout << sizeof(value) << std::endl;
// 	}
// }; 


// int main()
// {
// 	double a = 5.6161; 
// 	// MyClass c (a); // вот так объявить переменную не удастся так как нужно указать тип данных с которыми класс будет работать
// 	MyClass<double> c (a); // в угловых скобках можно указать тип данных
// 	c.DataTypeSize(); // для double размер 8

// return 0;
// }


// // VARIANT 3  // работа с переменной класс Point

// class Point
// {
// public:
// 	int x;
// 	int y; 
// 	int z;
	
// 	Point()
// 	{
// 		x = y = z = 0;
// 	}
// 	Point(int x, int y, int z) : x(x), y(y), z(z)
// 	{
		
// 	}
	
// };


// template <typename T> // ключевое слово template говорит, что класс MyClass будет 
// //шаблонным, a typename T - обобщенный вид данных который будет использован в классе
// // имя может быть рандомным 
// вместо typename можно использовать ключевое слова class

// class MyClass
// {
// private:
// 	T value;

// public:
// 	MyClass (T value) : value (value)
// 	{
		
// 	}
	
// 	void DataTypeSize()
// 	{
// 		std::cout << sizeof(value) << std::endl;
// 	}
// }; 


// int main()
// {
// 	Point a; 
	
// 	// MyClass c (a); //вот так объявить переменную не удастся так как нужно указать тип данных с которыми класс будет работать
// 	MyClass<Point> c (a); //в угловых скобках можно указать тип данных
// 	c.DataTypeSize(); //для переменной класса Point размер 12 (потому что 3 интовых переменных)

// return 0;
// }


// VARIANT 4  // работа с переменной класс Point (внутри double)

// class Point
// {
// public:
// 	double x;
// 	double y; 
// 	double z;
	
// 	Point()
// 	{
// 		x = y = z = 0;
// 	}
// 	Point(double x, double y, double z) : x(x), y(y), z(z)
// 	{
		
// 	}
	
// };


// template <typename T> // ключевое слово template говорит, что класс MyClass будет 
// //шаблонным, a typename T - обобщенный вид данных который будет использован в классе
// // имя может быть рандомным
// class MyClass
// {
// private:
// 	T value;

// public:
// 	MyClass (T value) : value (value)
// 	{
		
// 	}
	
// 	void DataTypeSize()
// 	{
// 		std::cout << sizeof(value) << std::endl;
// 	}
// }; 

// int main()
// {
// 	Point a; 
	
// 	// MyClass c (a); //вот так объявить переменную не удастся так как нужно указать тип данных с которыми класс будет работать
// 	MyClass<Point> c (a); //в угловых скобках можно указать тип данных
// 	c.DataTypeSize(); //для переменной класса Point размер 24 (потому что 3 double переменных)

// return 0;
// }


// VARIANT 5  // работа не с одной переменной Т

class Point
{
public:
	double x;
	double y; 
	double z;
	
	Point()
	{
		x = y = z = 0;
	}
	Point(double x, double y, double z) : x(x), y(y), z(z)
	{
		
	}
	
};


template <typename T1, typename T2> // ключевое слово template говорит, что класс MyClass будет 
//шаблонным, a typename T - обобщенный вид данных который будет использован в классе
// имя может быть рандомным
class MyClass
{
private:
	T1 value;
	T2 value2;

public:
	MyClass (T1 value, T2 value2) : value (value), value2(value2)
	{
		
	}
	
	void DataTypeSize()
	{
		std::cout << sizeof(value) << std::endl;
		std::cout << sizeof(value2) << std::endl;
	}
}; 


int main()
{
	int a = 2;
	Point p; 
	
	// MyClass c (a); //вот так объявить переменную не удастся так как нужно указать тип данных с которыми класс будет работать
	MyClass<int, Point> c (a, p); //в угловых скобках можно указать 2 типа данных 
	// так как у нас 2 вида переменных
	c.DataTypeSize(); //для переменной класса Point размер 24 (потому что 3 double переменных)

return 0;
}