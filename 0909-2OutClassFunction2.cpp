/* https://www.youtube.com/watch?v=sHKo3wP_EW0&list=PLQOaTSbfxUtBm7DxblJZShqBQnBAVzlXX&index=3 */
// лекция на Simple Code

/* 
Методы класса. 
Что такое методы в программировании. 
Вызов метода класса. Функции. 
C++ Урок #74
*/

#include <iostream>
// using namespace std;//если использовать пространство имен STD 
// /*то можно использовать string (это как char в С), cout cin без std::
// но если не использовать namespace то нужно будет приписывать к string
// принадлежность к классу std::string

class Human // это название класса // по сути это ТИП данных как инт и тд
{
public: // это модификатор доступа, без него нельзя обратиться к полям класса
	int age; // это свойство или поле класса
	int weight;
	std::string name;// это как char name in C

};

/*
Я специально решил можно писать отдельную функцию (метод) вне класса, которая бы принимал переменную класса
и выводила бы значения полей класса

*/

	void Print (Human name, Human weight, Human age)
	{
		std::cout << "Имя " << name << "\nВес " << weight << "\nВозраст " << age << std::endl << std::endl; // два endline
	}



int main()
{
	Human firstHuman;  
	
	firstHuman.age = 30; // это обращение через "." с правом доступа public к полю (свойству) переменной класса и
	// и присвоение значения
	firstHuman.name = "Ivanov Ivan"; // обращение возможно только через модификатор
	firstHuman.weight = 100;

	firstHuman.Print(); //через точку после переменной типа Human 
	// вызываем метод из класса НО будет выводить только значения из firstHuman;

	Human secondHuman;
	secondHuman.Print(); // так как мы не писали свойства ОБЪЕКТА secondHuman типа класс Human
	// то функция хотя и существует для всех Объектов (но для этого конкретного объекта нет
	//заданных свойств и значений  ) МЕТОД РАБОТАЕТ С ПОЛЯМИ СВОЕГО ОБЪЕКТА


	//https://www.youtube.com/watch?v=DjjnCgUDwEg





}