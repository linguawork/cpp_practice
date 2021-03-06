/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0930Init_RulesInCpp.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:33:18 by areggie           #+#    #+#             */
/*   Updated: 2021/09/30 15:52:35 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://ravesli.com/urok-28-detalnee-ob-initsializatsii-prisvaivanii-i-opredelenii/
Статья о том какие есть виды инициализации в с++ и 
какой стиль лучше для удобочитаемости и для меньшего числа ошибок
*/

/*
Урок №28. Инициализация, присваивание и объявление переменных
*/



/*
При объявлении переменной мы можем присвоить ей значение в этот же момент. 
Это называется инициализацией переменной.

Язык C++ поддерживает 2 основных способа инициализации переменных.

Способ №1: Копирующая инициализация (или «инициализация копированием») с помощью знака равенства =:

int nValue = 5; // копирующая инициализация

Способ №2: Прямая инициализация с помощью круглых скобок ():

int nValue(5); // прямая инициализация
Прямая инициализация лучше работает с одними типами данных, копирующая инициализация — с другими.




UNIFORM-инициализация (STANDARD C++ 11)
Прямая или копирующая инициализация работают не со всеми типами данных 
(например, вы не сможете использовать эти способы для инициализации списка значений).

В попытке обеспечить единый механизм инициализации, который будет работать со всеми типами данных,
в C++11 добавили новый способ инициализации, который называется uniform-инициализация:

int value{5};

Инициализация переменной с пустыми фигурными скобками указывает на инициализацию по умолчанию 
(переменной присваивается 0):

int value{}; // инициализация переменной по умолчанию значением 0 (ноль)

В uniform-инициализации есть еще одно дополнительное преимущество:
вы не сможете присвоить переменной значение, которое не поддерживает её тип данных — компилятор выдаст предупреждение или сообщение об ошибке. Например:

int value{4.5}; // ошибка: целочисленная переменная не может содержать нецелочисленные значения

Правило: Используйте uniform-инициализацию.




Когда переменной присваивается значение после её объявления (не в момент объявления), 
то это КОПИРУЮЩЕЕ ПРИСВАИВАНИЕ (или просто «присваивание»):

int nValue;
nValue = 5; // копирующее присваивание

В языке C++ нет встроенной поддержки способов прямого/uniform-присваивания, 
есть только копирующее присваивание.
*/

//Объявление пяти переменных разных типов:

bool bValue;
char chValue;
int nValue;
float fValue;
double dValue;
//void vValue; // не будет работать, так как void не может использоваться в качестве типа переменной

/*
 Современные компиляторы не требуют, 
чтобы все переменные обязательно были объявлены в самом верху функции. 
В языке С++ приоритетным является объявление (а также инициализация) 
переменных как можно ближе к их первому использованию:
*/

#include <iostream>
 
int main()
{
    std::cout << "Enter a number: ";
    int x; // мы используем x в следующей строке, поэтому объявляем эту переменную здесь (как можно ближе к её первому использованию)
    std::cin >> x; // первое использование переменной x
 
    std::cout << "Enter another number: ";
    int y; // переменная y понадобилась нам только здесь, поэтому здесь её и объявляем 
    std::cin >> y; // первое использование переменной y
 
    std::cout << "The sum is: " << x + y << std::endl;
    return 0;
}

/*
Из урока №28 мы уже знаем, что инициализировать переменные можно тремя способами: 
через копирующую инициализацию, прямую инициализацию или uniform-инициализацию.

int value1 = 3; // копирующая инициализация
double value2(4.5); // прямая инициализация 
char value3 {'d'} // uniform-инициализация

*/