
/* 
Перегрузка функций c++ пример.
Что такое перегрузка функций. 
Как перегрузить функцию. Урок #40
*/

/*
Суть: может быть несколько функций с одним названием
Каждая из них работает с одним только типом данных
Когда вызываются такие функции, в зависимости от подаваемыъх значений
подбирается функция с нужным типом данных
Это происходит автоматически
*/

/* youtube.com/watch?v=A-j5xN-pOCU&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=51 */
// лекция на Simple Code
// https://elearning.intra.42.fr/notions/piscine-c-d02-93e8d707-f883-4f82-928b-cbc45a162079/subnotions/piscine-c-d02-ad-hoc-polymorphism/videos/adhoc-polymorphism
// лекция в Интре у французов // ad hoc polimorphism


#include <iostream>
#include <string>

int Sum(int a, int b) 
{
	return a + b;
}


double Sum(double a, double b) 
{
	return a + b;
}

int Sum(int a, int b, int c) 
{
	return a + b + c;
}

int main()
{
	std::cout << Sum(3, 5) << std::endl;
	std::cout << Sum(3.4, 5.5) << std::endl;
	std::cout << Sum(3, 4, 5) << std::endl;
	// std::cout << Sum(3.4, 5) << std::endl;//  при подаче разных типов прога ругается
	return 0;
}