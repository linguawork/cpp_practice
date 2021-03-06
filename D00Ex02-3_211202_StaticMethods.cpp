/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D00Ex02-3_211202_StaticMethods.cpp                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:34:58 by areggie           #+#    #+#             */
/*   Updated: 2022/04/29 21:37:46 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
источник https://ravesli.com/urok-125-staticheskie-metody-klassa/
*/

/* 
Урок №125. Статические методы класса
*/

#include <iostream>

/*
Статические методы можно определять вне тела класса. 
Это работает так же, как и с обычными методами. 
Например:
*/


class IDGenerator
{
private:
    static int s_nextID; // объявление статической переменной-члена
 
public:
     static int getNextID(); // объявление статического метода
};

/*
    Определение статической переменной-члена находится вне тела класса. 
    Обратите внимание, мы не используем здесь ключевое слово static.
    Начинаем генерировать ID с 1
*/

int IDGenerator::s_nextID = 1;
 
//Определение статического метода находится вне тела класса. 
//Обратите внимание, мы не используем здесь ключевое слово static
int IDGenerator::getNextID() { return s_nextID++; } 
 
int main()
{
    for (int count=0; count < 4; ++count)
        std::cout << "The next ID is: " << IDGenerator::getNextID() << '\n';

    return 0;
}

/*
Обратите внимание, поскольку все переменные и функции этого класса являются
 статическими, то нам НЕ НУЖНО СОЗДАВАТЬ ОБЪЕКТ КЛАССА этого класса для работы 
 с ним! Статическая переменная-член используется для хранения значения 
 следующего идентификатора, который должен быть ей присвоен, 
 а статический метод — для возврата идентификатора и его увеличения.
*/
