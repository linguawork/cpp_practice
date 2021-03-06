
/* 
Передача параметров в функцию по указателю c++. 
Передача указателя в функцию си. 
Урок #48
*/

/*
В ОТЛИЧИЕ от передачи по значению передача по указателю (также по ссылке)
 меняет значение так как указатель
работает с адресом) 
Обязательно нужно написать амперсанд в MAIN
и внутри исполнаяемой функции нужна операция разыменования
*/

/* https://www.youtube.com/watch?v=EfuRJct6bhk */
// лекция на Simple Code


#include <iostream>
#include <string>

void Foo(int *a) 
{
	(*a)++; // приоритет. сперва разыменовываем потом инкрементируем
}


int main()
{
	int value;
	
	value = 1;
	std::cout << "value = " << value << std::endl;
	

	std::cout << "Foo = " << std::endl;
	Foo(&value); //  так как работаем с указателем то пишем амперсанд
	// внутри функции мы пишем разыменование
	// Хотя Foo ничего не возвращает значение Value изменилось
	std::cout << "value = " << value << std::endl << std::endl;
	return 0;
}