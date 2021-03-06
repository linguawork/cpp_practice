/* https://www.youtube.com/watch?v=OvzACnP7h9E&list=PLQOaTSbfxUtBm7DxblJZShqBQnBAVzlXX&index=8 */
// лекция на Simple Code

/* 
Конструктор класса пример. 
Зачем нужен. 
Конструктор с параметрами. 
Конструктор по умолчанию. 
Урок#78
*/

#include <iostream>

class Point
{
// public:
private:
	int x;
	int y;

public: //для доступа к приватным полям нужны ПУБЛИЧНЫЕ методы (getters and setters)
/*
В отличие от обычных методов, 
конструкторы имеют определенные правила их именования:
!!!конструкторы ВСЕГДА ДОЛЖНЫ иметь то же имя, что и класс 

!!! Конструктор вызывается при создании объекта класса (или по умолчанию без параметров, 
или мы сами пишем туда параметры через список инициализации)

!!! Даже если конструктор не прописан он будет создан компилятором по умолчанию без параметров и вызван 
(если используются какие-то методы или переменные класса)

!!! Если сами прописываем К с параметрами (то конструктор по умолчанию не будет создаваться)


!!! Конструктор - это метод, который ничего не возвращает. (1:59)

!!! ЕСЛИ в main не прописано создание объекта, то конструктор вызывается сам по умолчанию 

!!! Конструктор вызывается в поле модификатора Public. Если писать в PRIVATE к нему не будет доступа
и объект нельзя будет создать (но такое возможно при проектировании класса-одиночки SingleTon)
*/
	// Point() //  это вызов конструктора по умолчанию так как не принимает параметров
	// {

	// }

	Point(int valueX, int valueY) //  это вызов конструктора с параметрами, пользователь сам пишет 
	// поля которые нужно инициализировать // названия полей НЕ ДОЛЖНЫ совпадать с названиями переменных конструкторпа
	{
		x = valueX;
		y = valueY;
	}



	int GetY() // получить значение X
	{
		return y; // этот метод принимает ничего и возращает x (доступ к приватной x)
	}

	void SetY (int valueY)// установить значение x
	{
		y = valueY; // устанавливаем значение приватного поля x
	}

	int GetX() // получить значение X
	{
		return x; // этот метод принимает ничего и возращает x (доступ к приватной x)
	}

	void SetX (int valueX)// установить значение x
	{
		x = valueX;// устанавливаем значение приватного поля x
	}

	void Print()
	{
		std::cout << "X = " << x << "\tY = " << y << std::endl;
	}
};

int main() 
{
	// Point a;
	/*
	так как я создал свой конструктор то теперь мне нужно задавать значения переменных
	в конструктор в скобках:
	Point a(1, 2); Без скобок уже нельзя
	 */
	Point a(1, 2);
	a.Print(); // если переменные не инициализированы, то будет выводится мусор
	// для этого и существует Конструкторы (по умолчанию или с переменными)
	Point b(11, 22); // для второго Объекта тоже отработает
	b.Print();

	return 0;
}