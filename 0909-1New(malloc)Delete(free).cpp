/* 
new c++ что это. 
new c++ пример.
c++ new delete. 
delete c++ что это. 
delete c++ пример. 
Урок #53
*/

/*
Суть: new как маллок в С
delete как free в С
 не нужно писать размер выделяемой памяти (в плюсах это автоматически)
 Обязательно нужно зачищать 
*/

/* https://www.youtube.com/watch?v=vtslSm2GA9w&t=1s */
// лекция на Simple Code


#include <iostream>
#include <string>

int main()
{
	int *pointer; // объявл указ

	std::cout << pointer << std::endl; // вывод адреса указателя
	std::cout << *pointer << std::endl; // вывод содержания ячейки на которую указывает указатель
	// там лежит NULL
	pointer = new int; // выделяем память под тип данных указателя (тип int)
	*pointer = 10; // разым-м и кладем значение
	std::cout << *pointer << std::endl; // вывод содержания ячейки на которую указывает указатель
	delete pointer; // освобождаем ячейку но не указатель
	return 0;
}