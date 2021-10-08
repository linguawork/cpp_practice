
/* https://www.youtube.com/watch?v=ULpr1Z0WEtQ&list=PLQOaTSbfxUtBm7DxblJZShqBQnBAVzlXX&index=2 */
// лекция на Simple Code
// https://www.youtube.com/watch?v=ULpr1Z0WEtQ&list=PLQOaTSbfxUtBm7DxblJZShqBQnBAVzlXX&index=5

/* 
Что такое класс. 
Что такое объект класса. 
Экземпляр класса это.
 Класс ООП это. Урок #73
 */

#include <iostream>
// using namespace std;//если использовать пространство имен STD 
// /*то можно использовать string (это как char в С), cout cin без std::
// но если не использовать namespace то нужно будет приписывать к string
// принадлежность к классу std::string*/

class Human // это название класса // по сути это ТИП данных как инт и тд
{
public: // это модификатор доступа, без него нельзя обратиться к полям класса
	int age; // это свойство или поле класса
	int weight;
	std::string name;// это как char name in C
};

class Point
{
public:
	int x;
	int y;
	int z;

};
int main() // Это хороший пример хранения данных о ком-либо (например о студентах) // Сергей использовал двумерный массив как альтернативу
{
	Human firstHuman; // это переменная типа 'class Human' (это и есть ОБЪЕКТ или ЭКЗЕМПЛЯР КЛАССА)
	
		firstHuman.age = 30; // это обращение через "." с правом доступа public к полю (свойству) переменной класса и
		// и присвоение значения
		firstHuman.name = "Ivanov Ivan"; // обращение возможно только через модификатор
		firstHuman.weight = 100;

		std::cout << firstHuman.age << std::endl; // можно выводить значение полей переменных класса
		std::cout << firstHuman.name << std::endl; 
		std::cout << firstHuman.weight << std::endl; 

		std::cout << "________________________________" << std::endl;

	Human secondHuman; // создание новой переменной типа класс Human
	// по сути это создание второго ОБЪЕКТА класса Human
		secondHuman.age = 19;
		secondHuman.name= "Noname";
		secondHuman.weight = 120;

		std::cout << secondHuman.age << std::endl; // можно выводить значение полей переменных класса
		std::cout << secondHuman.name << std::endl; 
		std::cout << secondHuman.weight << std::endl;

	Point a; // Объект класса Point
		a.x = 1;
		a.y = 3;
		a.z = 4;




}