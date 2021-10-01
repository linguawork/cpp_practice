
/* !!!!!!!!!!!!!!!!!!!!!!
VERY POWERFULL TOOL!
Возврат нескольких значений функции через ссылки. 
Как вернуть несколько значений функции. 
Урок #52
*/

/*
В ОТЛИЧИЕ от передачи по значению передача по ссылке(также как по указателям)
 меняет значение так как ссылка
работает с адресом ячейки) 
В отличие от указателя не нужно писать амперсанд с аргументом в вызываемой функции в MAIN
и внутри исполнаяемой функции не нужна операция разыменования

МОЖНО ИЗМЕНЯТЬ ЗНАЧЕНИЯ МНОГИХ ПЕРЕМЕННЫХ передавая ссылки
MIND BLOWING INSTRUMENT!
*/

/* https://www.youtube.com/watch?v=7btUwxD4V5s */
// лекция на Simple Code


#include <iostream>
#include <string>

void Foo(int &a, std::string &b, int &c) 
{
	a++; // не нужно разыменовывать
	b = "Cool";
	c = 200;
}


int main()
{
	int value_a;
	std::string value_b;
	int value_c;

	value_a = 1;
	value_b = "Hello";
	value_c = 1;

	std::cout << "value_a = " << value_a << std::endl;
	std::cout << "value_b = " << value_b << std::endl;
	std::cout << "value_c = " << value_c << std::endl;
	

	std::cout << "Foo = " << std::endl;
	Foo(value_a, value_b, value_c); //  так как работаем со ссылкой то не пишем амперсанд
	// внутри функции мы не пишем разыменование
	// Хотя Foo ничего не возвращает значение Value изменяется
	std::cout << "value_a = " << value_a << std::endl;
	std::cout << "value_b = " << value_b << std::endl;
	std::cout << "value_c = " << value_c << std::endl;
	return 0;
}