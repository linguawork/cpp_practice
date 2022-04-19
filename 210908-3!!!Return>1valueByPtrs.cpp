
/*
Удобней передавать по ссылке и изменять значения
Передавая указатели нужно разыменовывать
*/


/* !!!!!!!!!!!!!!!!!!!!!!
VERY POWERFULL TOOL!
Возврат нескольких значений функции через указатели.
 Функция возвращает несколько значений. 
 #49
*/

/*
В ОТЛИЧИЕ от передачи по значению передача по указателю (также по ссылке)
 меняет значение так как указатель
работает с адресом) 
Обязательно нужно написать амперсанд в MAIN
и внутри исполнаяемой функции нужна операция разыменования

МОЖНО ИЗМЕНЯТЬ ЗНАЧЕНИЯ МНОГИХ ПЕРЕМЕННЫХ передавая указатели
MIND BLOWING INSTRUMENT!
*/

/* https://www.youtube.com/watch?v=wbWwDYqgtl0 */
// лекция на Simple Code


#include <iostream>
#include <string>

void Foo(int *a, std::string *b, int *c) 
{
	(*a)++; // приоритет. сперва разыменовываем потом инкрементируем
	(*b) = "Cool";
	(*c) = 200;
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
	Foo(&value_a, &value_b, &value_c); //  так как работаем с указателем то пишем амперсанд
	// !!!внутри функции мы пишем разыменование
	// Хотя Foo ничего не возвращает значение Value изменилось
	std::cout << "value_a = " << value_a << std::endl;
	std::cout << "value_b = " << value_b << std::endl;
	std::cout << "value_c = " << value_c << std::endl;
	return 0;
}