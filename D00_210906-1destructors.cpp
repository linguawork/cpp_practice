/*

https://www.youtube.com/watch?v=kXng09pmfwM&list=PLQOaTSbfxUtBm7DxblJZShqBQnBAVzlXX&index=9

Деструктор что это. 
Зачем нужен деструктор класса в ООП.
Деструктор с параметрами. 
Перегрузка.
#80

Деструктор это метод который сам вызывается когда уничтожается объект класса
Функция деструктора - уничтожить объект после использования
Уничтожение происходит когда объект выходит из зоны видимости т,е перед выходом метода 
int main()
{
	
пространство между кавычками и есть зона видимости
на видео 11:38

} -> на выходе работает деструктор (производятся действия которые прописаны в деструкторы)
обычно в деструкторе ничего не пишут
!!! Объекты уничтожаются в обратном порядке (противполож порядку создания) Как матрешки
Самый первый созданный будет уничтожен последним: FILO



*/