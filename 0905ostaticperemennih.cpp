// источник: https://www.youtube.com/watch?v=Mlc9vyFdHE8
// static что это. Статические поля класса. Инициализация. Ключевое слово static. C++ #92
// 2021 09 05

#include <iostream>
#include <string> // по сути string как класс (у него есть объекты типа length)

// using namespace std;//если использовать пространство имен STD 
// /*то можно использовать string (это как char в С), cout cin без std::
// но если не использовать namespace то нужно будет приписывать к string
// принадлежность к классу std::string*/


class Apple
{

public:
	static int Count; //c помощью статич переменной можно сделать генератор ID
	/* С говорит что статические переменные - общие для всех объектов класса.
	Если задается значение для статической переменной - то оно - одно для всех объектов (экземпляров)
	класса*/

	Apple(int weight, std::string color) // string как char
	/* это конструктор не по умолчанию, так как мы подали внутрь параметры  для инициализации
	 в нем можно статической переменной считать 
	 так как статик не меняется в классах */
	{
		this->weight = weight;
		this->color = color;
		Count++;
	}

private:
	int weight;
	std::string color;

};

int Apple::Count = 0; // статические переменные объявляют вне класса в С++ 
// не как в Java and C#

 
int main()
{
	setlocale(LC_ALL, "ru");

	Apple apple(150, "Red"); //при каждом прохождении через объект мы проходим один раз через конструктор
	Apple apple2(100, "Green");
	

	std::cout << apple.Count << std::endl; // без инициализации статич переменной печати не будет


	return 0;
}