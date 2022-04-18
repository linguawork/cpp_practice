/*

Модификаторы доступа классов. 
public private protected что это. 
Спецификаторы доступа. C++ Урок #75

https://www.youtube.com/watch?v=77H7aRy68P8

*/

/*



Внутри класса 
есть поля (или МОДИФИКАТОРЫ ДОСТУПА)

private:
!!!ОБЛАСТЬ ПОЛЯ - ВНИЗ И пока оно не прервется другим полем 

можно писать переменные, методы, конструкторы

Все переменные и функции видны и доступны ТОЛЬКО для всех ВНУТРИ класса (но переменные можно достать через геттеры и сеттеры)
извне при создании объекта например в функции MAIN к ним НЕЛЬЗЯ обратиться через оператор . (Например object.x)

!!!ЕСЛИ НЕ ПРОПИСАТЬ НИКАКИЕ ПОЛЯ (МОДИФИКАТОРЫ ДОСТУПА)ТО ПО УМОЛЧАНИЮ всё поле будет PRIVATE (2:43)

!!!ЕСЛИ  метод в поле private, то этот метод может обращаться КО ВСЕМ полям ВНУТРИ класса!
НО этот метод не доступен через object.x
Однако к нему можно обратиться через метод в публичном поле просто вызвав туда метод из приватного поля
(получается как посредничество)

Сокрытие части функционала есть ПРИМЕР ИНКАПСУЛЯЦИИ




protected:
!!!ОБЛАСТЬ ПОЛЯ - ВНИЗ И пока оно не прервется другим полем 

Извне при создании объекта например в функции MAIN 
к ним НЕЛЬЗЯ обратиться через оператор . (Например object.x)

Это поле работает как private но имеет свои свойства при НАСЛЕДОВАНИИ:
Нельзя обратиться в main через object.x
НО при НАСЛЕДОВАНИИ можно обратиться через через object.x







public:
!!!ОБЛАСТЬ ПОЛЯ - ВНИЗ И пока оно не прервется другим полем 

Все переменные и функции видны и доступны для всех (и внутри и вне класса)
Извне при создании объекта например в функции MAIN к ним МОЖНО обратиться через оператор . (Например object.x)

При создании объекта можно обращаться через точку (а.x или а.print())

!!!ЕСЛИ  метод в поле public то этот метод может обращаться КО ВСЕМ полям ВНУТРИ класса!
И этот метод доступен через объект.

*/