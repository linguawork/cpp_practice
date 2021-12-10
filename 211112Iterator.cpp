/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211112Iterator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:11:06 by areggie           #+#    #+#             */
/*   Updated: 2021/11/12 22:39:43 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://metanit.com/cpp/tutorial/7.3.php

Для получения итераторов контейнеры в C++ обладают такими функциями, как begin() и end(). 
Функция begin() возвращает итератор, который указывает на первый элемент контейнера 
(при наличии в контейнере элементов). Функция end() возвращает итератор, 
который указывает на следующую позицию после последнего элемента, 
то есть по сути на конец контейнера. Если контейнер пуст, 
то итераторы, возвращаемые обоими методами begin и end совпадают. 
Если итератор begin не равен итератору end, то между ними есть как минимум один элемент.

Обе этих функции возвращают итератор для конкретного типа контейнера:


Код ниже почему-то не компилятся:
*/

/*
    https://stackoverflow.com/questions/39022787/error-non-aggregate-type-vectorint-cannot-be-initialized-with-an-initialize
	!!!!You need to switch on std C11, to compile please type: clang++ -std=c++11 [filename]
*/
 

#include <iostream>
#include <vector>


#define NORMAL	"\033[0m" 		//все атрибуты по умолчанию
#define BLACK	"\033[0;30m" 
#define RED		"\033[0;31m"      
#define GREEN	"\033[0;32m"   
#define YELLOW	"\033[0;33m"   
#define BLUE	"\033[0;34m"       
#define MAGENTA "\033[0;35m"  	//фиолетовый цвет знаков   
#define CYAN	"\033[0;36m"    //цвет морской волны знаков
#define GRAY	"\033[0;37m" 
  
int main()
{
    //Scope 1
    {
        std::cout << RED << "Scope1: Вывод массива вектора итератором" << NORMAL << std::endl;
        std::vector<int> v = { 1, 2, 3, 4, 5};
        auto iter = v.begin();  // получаем итератор
        while(iter!=v.end())    // пока не дойдем до конца
        {
            std::cout << *iter << std::endl;// получаем элементы через итератор
            ++iter;             // перемещаемся вперед на один элемент
        }
        
    }

    //Scope 2
    {
        std::cout << RED << "Scope2: Возведение каждого элемента в квадрат и вывод" << NORMAL << std::endl;
        std::vector<int> v = {1, 2, 3, 4, 5};
        auto iter = v.begin();
        while(iter!=v.end())    // пока не дойдем до конца
        {
            *iter = (*iter) * (*iter); // возводим число в квадрат
            ++iter;
        }
        
        for(iter = v.begin(); iter!=v.end(); ++iter) //end указывает на пустое место после массива
        {
            std::cout << *iter << std::endl;
        }
    }
    //Scope 3
    {
        std::cout << RED << "Scope3: Попытка вывода неконст вектора конст итератором" << NORMAL << std::endl;
        std::vector<int> v = { 1, 2, 3, 4, 5 };
        for (std::vector<int>::const_iterator iter = v.cbegin(); iter != v.cend(); ++iter) 
        {
            std::cout << *iter << std::endl;
            // так нельзя сделать, так как итератор константный
            //*iter = (*iter) * (*iter);
        }
    }

    //Scope 4
    {
        std::cout << RED << "Scope2: Вывод реверсивным итератором" << NORMAL << std::endl;
        std::vector<int> v = { 1, 2, 3, 4, 5 };

        for (std::vector<int>::reverse_iterator iter = v.rbegin(); iter != v.rend(); ++iter)
        {
            std::cout << *iter << std::endl;
        }
        std::cout << "\n";
    }
    
    /*
    Scope 5
    Если контейнер представляет константу, 
    то для обращения к элементам этого контейнера можно использовать 
    только константный итератор (тип const_iterator). 
    Такой итератор позволяет считывать элементы, но не изменять их:
    
    */
    
    {
        std::cout << RED << "Scope5: Нельзя изменить конст вектор (элементы не изменяемы)" << NORMAL << std::endl;
        const std::vector<int> v = {1, 2, 3, 4, 5};
        for(auto iter = v.begin(); iter != v.end(); ++iter)
        {
            std::cout << *iter << std::endl;
            // так нельзя сделать
            // *iter = (*iter) * (*iter);
        }
    }  

    
    return 0;
}














