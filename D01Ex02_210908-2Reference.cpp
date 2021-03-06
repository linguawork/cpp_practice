
/* 
c++ ссылки что это. 
c++ ссылки и указатели разница.
 Указатель на ссылку. 
 Для начинающих. Урок #50
*/

/*
Ccылки в сравнении с указателями (быстро и доходчиво)
к ex02 of Day01 в бассейне по плюсам
*/

/* https://www.youtube.com/watch?v=hZOX-LlUETE */
// лекция на Simple Code

#include<iostream>
#include<string>

int main()
{
	int a = 5; // присвоение значения 

	// int b = a; // присвоение значения 

	int *ptr_to_a = &a; // присвоение адреса переменной а указателю
	// & - оператор взятия адреса

	std::cout << "value of a is = " << a << std::endl;

	int &aRef = a; // в ссылку присваивается сразу значение переменной а/ не адрес

	std::cout << "Ptr_to_a has the address of a " << ptr_to_a << std::endl;

	std::cout << "The reference: &aRef = a contains value of a (works as dereference) " << aRef << std::endl;

	std::cout << "The value inside the address of a is (разыменование) " << *ptr_to_a << std::endl;

	/*Отличия ссылки от указателей:
	1 Ссылка указывается сразу после указания типа данных и с амперсандом
	2 Ссылка присваивает значение переменной, но не переменную и не ее адрес:
	int &aRef = a; Здесь выведет 5, не а/
	3 Ccылку нельзя разыменовать
	4 Арифметики ссылок нет как арифметики указателей:
	но ссылки могут изменять значение:
	aref++ = +1 к значению
	 */

	aRef++; //= +1 к значению
	std::cout << "The reference: &aRef = a contains value of a + 1 after aRef++: " << aRef << std::endl;

	aRef=aRef+2; //= +2 к значению
	std::cout << "The reference: &aRef = a contains value of a + 2 after aRef+2: " << aRef << std::endl;
	
	// !!! ЧЕРЕЗ ССЫЛКИ МЫ РАБОТАЕМ С ДАННЫМИ НАПРЯМУЮ БЕЗ ВСЯКИХ РАЗЫМЕНОВАНИЙ

	aRef = 55; // можно сразу вносить новые значения в переменную а через ссылку
	std::cout << "new value of a is = " << a << std::endl;

	/* Еще одно отличие ссылки от указателей:
	 5 Нельзя объявить ссылку, не инициализировав ее значение
	 С указателем можно без инициализации (по умолчанию он  = NULL, 0, nullptr)
	 */
	// пример:
		// int *ptr_to_nowhere;
		// int &xRef;


	/* Особенность взаимодействия ссылки и указателя:
	 5 Нельзя использовать указатель на ссылку без амперсанда:
	 int *ppa = aref// WRONG! WILL NOT COMPILE
	 НО Можно использовать указатель на ссылку с амперсандом:
	 int *ppa = &aref// Можно указать на адрес ссылки
	 Затем через разыменование указателя можно положить значение в а:
	 *ppa = 12
	 С указателем можно без инициализации (по умолчанию он  = NULL, 0, nullptr)
	 */

	// Пример:
	int *ppa;
	// ppa = aRef; // compilation error
	ppa = &aRef;
	*ppa = 12;

	std::cout << "renewed value of a is = " << a << std::endl;

	//ВЫВОД: Ccылки практически применяются для ссылки на объект
	//NB!!!!!!! Это поможет существенно сэкономить ресурсы компа (так как объекты могут быть огромные)

	return 0;
}