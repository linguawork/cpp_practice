/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D02Ex00_210912-2!KonstruktorKopirovan.cpp          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 21:45:59 by areggie           #+#    #+#             */
/*   Updated: 2022/04/19 20:44:34 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
ПРОБЛЕМА: (cм видео 15:50) конструктор поверхностногно копирования по умолчанию   для объекта b который скопировал а
по сути взял адрес объекта а и присвоил b
деструктор зачистил массив в объекте а, но указатель b остался и указывает уже на стертый массив
 
Так как копия и оригинал имеют один и тот же адрес в памяти и на копию и на 
оригинал вызываются по деструктору (второй деструктор уже не может зачистить тот же адрес
после первого деструктора

РЕШЕНИЕ:
Эту проблему решают созданием вручную копии но уже с другим адресом!!! Это ВАЖНО!
Т.Е НУЖНО написать свой конструктор копирования:
*/



/*
источник:
 https://www.youtube.com/watch?v=3x9nd6Tm7Pc&t=803s */
// лекция на Simple Code

/* 
Конструктор копирования. Что это. Пример. 
Когда вызывается Копирование объектов по умолчанию C++ #82
*/

/*

Когда вызывается по умолчанию конструктор копирования (н-р)
когда создаем копию объекта или класса
может быть ошибка при вызове деструктора
Так как копия и оригинал имеют один и тот же адрес в памяти и на копию и на 
оригинал вызываются по деструктору (второй деструктор уже не может зачистить тот же адрес
после первого деструктора)
Эту проблему решают созданием вручную копии но уже с другим адресом!!! Это ВАЖНО!
к дню 02 упр00 по ++

Решать проблему также можно выделением памяти на куче для копии чтобы был
другой адрес!!!

Нужно дописать код из урока
*/

/*******ПЕРВЫЙ ПРИМЕР когда вызывается один видимый конструктор копирования
 и один невидимый конструктор копирования по умолчанию и 2 деструктора  ***********************/


 
// #include <iostream>
// #include <string>

// class MyClass
// {
// public:
// 	int data;

// 	MyClass(int data)
// 	{
// 		this->data = data;
// 		std::cout << "Вызвался конструктор " << this << std::endl; // распечатываем адрес this
// 	}

// 	~MyClass()
// 	{
// 		std::cout << "Вызвался деструктор " << this << std::endl; // распечатываем адрес this
// 	}	
// };

// void Foo(MyClass value)// передача параметра по значению - значит внутри функции
// // создается локальная копия которая с внешней поданной не имеет никакой связи // видео 6:10
// {
// 	std::cout << "Вызвалась функция FOO" << std::endl; 
// }

// int main()
// {
// 	MyClass a(1); // создали объект с поданным интом

// 	Foo(a); // в функцию Foo подаем нужный ей параметр My Class
// 	// так как передаем по значению то внутри создается копия т,е должен сработать конструктор копирования 
// 	//(если не прописать конструктор копирвоания самому то вызовится конструктор копирования по умолчанию
// 	// который сделает только поверхностное копирование (создание идентичной побитовой копии и такой вариант отработает если не использовать NEW:
// 	// выделение паямати))

// 	return 0;
// 	// после return завершается программа и срабатывает деструктор
// } 
 
/*
Так как передали по значению
то деструктор отработал с оригиналом поданным в функцию FOO  и c копией которая создалась локально в функции 

Почему не пишет что вызвался конструктор для создаваемой внутри функции копии?

Вызвался конструктор 0x7ffee278b818
Вызвалась функция FOO
Вызвался деструктор 0x7ffee278b810
Вызвался деструктор 0x7ffee278b818

*/

/***************ВТОРОЙ ПРИМЕР*********************/
// #include <iostream>
// #include <string>

// class MyClass
// {
// public:
// 	int data;

// 	MyClass(int data)
// 	{
// 		this->data = data;
// 		std::cout << "Вызвался конструктор " << this << std::endl; // распечатываем адрес this
// 	}

// 	~MyClass()
// 	{
// 		std::cout << "Вызвался деструктор " << this << std::endl; // распечатываем адрес this
// 	}	
// };

// void Foo(MyClass value)// передача параметра по значению - значит внутри функции
// // создается локальная копия которая с внешней поданной не имеет никакой связи // видео 6:10
// {
// 	std::cout << "Вызвалась функция FOO" << std::endl; 
// }

// MyClass Foo2() // ничего не принимает и возвращает MyClass
// {
// 	std::cout << "Вызвалась функция FOO2" << std::endl; 
// 	MyClass temp(2);// вызывается конструктор

// 	return temp; // возвращаем тип MyClass
// }


// int main()
// {
// 	Foo2(); //

// 	return 0;
// } 

/*
На SimpleCode вызвался два раза деструктор у меня один раз (почему?)

Вызвалась функция FOO2
Вызвался конструктор 0x7ffee9918818
Вызвался деструктор 0x7ffee9918818
*/



/*******ТРЕТИЙ ПРИМЕР когда вызывается один видимый конструктор копирования
 и один невидимый конструктор копирования по умолчанию и 2 деструктора  ***********************/
// #include <iostream>
// #include <string>

// class MyClass
// {
// public:
// 	int data;

// 	MyClass(int data)
// 	{
// 		this->data = data;
// 		std::cout << "Вызвался конструктор " << this << std::endl; // распечатываем адрес this
// 	}

// 	~MyClass()
// 	{
// 		std::cout << "Вызвался деструктор " << this << std::endl; // распечатываем адрес this
// 	}	
// };

// void Foo(MyClass value)// передача параметра по значению - значит внутри функции
// // создается локальная копия которая с внешней поданной не имеет никакой связи // видео 6:10
// {
// 	std::cout << "Вызвалась функция FOO" << std::endl; 
// }

// MyClass Foo2() // ничего не принимает и возвращает MyClass
// {
// 	std::cout << "Вызвалась функция FOO2" << std::endl; 
// 	MyClass temp(2);// вызывается конструктор

// 	return temp; // возвращаем тип MyClass
// }


// int main()
// {
// 	MyClass a(1); // создание объекта a = вызов конструктора по умолчанию // инициализация
	
// 	MyClass b(a); // создание объекта b = вызов конструктора по умолчанию // инициализация
// 	// конструктор копирования копирует в b данные из а

// 	return 0;
// } 

/*

куда девался второй конструктор для b?

Вызвался конструктор 0x7ffeea811818  // создание объекта а
Вызвался деструктор 0x7ffeea811810 // уничтожение объекта b
Вызвался деструктор 0x7ffeea811818 // уничтожение объекта a
*/


/* на 12:30 *****ЧЕТВЕРТЫЙ ПРИМЕР с ВЫДЕЛЕНИЕМ ПАМЯТИ когда вызывается один видимый конструктор копирования
 и один невидимый конструктор копирования по умолчанию и 2 деструктора  ***********************/

// #include <iostream>
// #include <string>

// class MyClass
// {
// public:
// 	int *data;

// 	MyClass(int size)//  кол-во элементов в динамическом массиве
// 	{
// 		this->data = new int[size];
		
// 		for (int i = 0; i < size; i ++)
// 		{
// 			data[i] = i; // в нулевой кладем его же нулевой индекс
// 		}
// 		std::cout << "Вызвался конструктор " << this << std::endl; // распечатываем адрес this
// 	}

// 	~MyClass()
// 	{
// 		std::cout << "Вызвался деструктор " << this << std::endl; // распечатываем адрес this
// 		delete [] data; // так как выделяли память то чистим массив квадрат скобками 
// 	}	
// };


// int main()
// {
// 	MyClass a(10); // создание объекта a = вызов конструктора по умолчанию // инициализация
	
// 	MyClass b(a); // создание объекта b = вызов конструктора по умолчанию // инициализация
// 	// конструктор копирования копирует в b данные из а

// 	return 0;
// }  

/*


Вызвался конструктор 0x7ffee6181810 //  здесь создали объект a c массивом
Вызвался деструктор 0x7ffee6181808  // убрали объект b
Вызвался деструктор 0x7ffee6181810 // убрали объект а
a.out(90411,0x11544f5c0) malloc: *** error for object 0x7f944ec02a70: pointer being freed was not allocated
a.out(90411,0x11544f5c0) malloc: *** set a breakpoint in malloc_error_break to debug
[1]    90411 abort      ./a.out

ПРОБЛЕМА: (cм видео 15:50) конструктор поверхностногно копирования по умолчанию   для объекта b который скопировал а
по сути взял адрес объекта а и присвоил b
деструктор зачистил массив в объекте а, но указатель b остался и указывает уже на стертый массив
 
Так как копия и оригинал имеют один и тот же адрес в памяти и на копию и на 
оригинал вызываются по деструктору (второй деструктор уже не может зачистить тот же адрес
после первого деструктора

РЕШЕНИЕ:
Эту проблему решают созданием вручную копии но уже с другим адресом!!! Это ВАЖНО!
Т.Е НУЖНО написать свой конструктор копирования:
*/




/* на  *****ПЯТЫЙ ПРИМЕР с ВЫДЕЛЕНИЕМ ПАМЯТИ  И СВОИМ КОНСТРУКТОРОМ КОПИРОВАНИЯ  ***********************/

#include <iostream>
#include <string>

class MyClass
{
private:
	int Size; // добавили приватную переменную SIZE
public:
	int *data;

	MyClass(int size)// свой, недефолтный конструктор создания объекта кол-во элементов в динамическом массиве
	{
		this->Size = size; // в приватную переменную присвоили подаваемый размер
		this->data = new int[size];
		
		for (int i = 0; i < size; i ++)
		{
			data[i] = i; // в нулевой кладем его же нулевой индекс
		}
		std::cout << "Вызвался конструктор " << this << std::endl; // распечатываем адрес this
	}

	MyClass (const MyClass & other) // конструктор копирования другого (other) объекта в этот (this)
	// const - ничего менять не будем
	// MyClass - копируем из объекта other этого же класса
	// & other - принимаем по ссылке те работаем не с копией а непосредственно с адресом объекта и его содержимым
	// заглядываем по ссылке в другой объект и применяем его данные
	{
		this->Size = other.Size; // здесь нет выделения памяти и мы можем просто копировать данные
		// this->data = other.data; // это поверхностное копирование по умолчанию: просто присваивание
		this->data = new int[other.Size]; // в копию этого объекта присваиваем новый массив под размер другого объекта;
		// по сути в новый объект присваиваем новый адрес, а не копируем как в поверхностном копировании
		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i]; //см 25 минуту и в новый массив этого объекта перенесли данные из другого объекта
		}
		std::cout << "Вызвался конструктор копирования " << this << std::endl; // распечатываем адрес this чтобы было понятно какой объект
	}

	~MyClass()
	{
		std::cout << "Вызвался деструктор " << this << std::endl; // распечатываем адрес this
		delete [] data; // так как выделяли память то чистим массив квадрат скобками 
	}	
};


int main()
{
	MyClass a(10); // создание объекта a = вызов конструктора создания или инициализации по умолчанию // инициализация
	
	MyClass b(a); // свой прописанный конструктор копирования  копирует в b данные из а по 

	return 0;
}  


/*
с 18-30 на видео создание СВОЕГО конструктора копирования
на 25 мин объяснение копирования в новый массив
Все отработало правильно!!!

Вызвался конструктор 0x7ffeedd8b808 // a
Вызвался конструктор копирования 0x7ffeedd8b7f8 // копирования из а в b
Вызвался деструктор 0x7ffeedd8b7f8 // b
Вызвался деструктор 0x7ffeedd8b808 // a

*/