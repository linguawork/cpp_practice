/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211019-7ReinterpretCast.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:35:10 by areggie           #+#    #+#             */
/*   Updated: 2021/10/24 14:11:24 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Источник: https://pro-prof.com/forums/topic/%D1%8F%D0%B2%D0%BD%D0%BE%D0%B5-%D0%BF%D1%80%D0%B8%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D0%B5-%D1%82%D0%B8%D0%BF%D0%BE%D0%B2-%D0%B2-c

https://en.cppreference.com/w/cpp/language/reinterpret_cast

https://ru.stackoverflow.com/questions/716240/%D0%92-%D1%87%D1%91%D0%BC-%D1%81%D0%BC%D1%8B%D1%81%D0%BB-%D1%81%D1%83%D1%89%D0%B5%D1%81%D1%82%D0%B2%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F-reinterpret-cast
reinterpret_cast используется не только для преобразования указателей одного типа в другой.
Существует несколько разных преобразований. cppreference.com выделяет 11 вариантов 
преобразований:

В свой собственный тип
Указателя в интегральный тип
Интегрального типа в указатель
Типа std::nullptr_t в интегральный тип
Указателя одного типа в указатель другого типа
lvalue одного типа в ссылку на другой тип
Указателя на функцию одного типа в указатель на функцию другого типа
Указателя на функцию в void*
Нулевого указателя любого типа в указатель любого другого типа
rvalue указатель одного типа на функцию-член в указатель другого типа на функцию-член
rvalue указатель члена-данных одного типа в указатель ну другой член-данных другого типа
Type aliasing-правила затрагивают только пункты 5 и 6 и результат может быть безопасно использован (т.е. без нарушения strict-aliasing) в следующих случаях:


Результирующий тип есть динамический тип исходного объекта
Результирующий тип и динамический тип указывают на одинаковый тип T
Результирующий тип есть знаковый или беззнаковый вариант типа исходного объекта
Результирующий тип есть агрегатный тип или union, в котором содержится элемент или нестатический член данных, используемый в качестве исходного объекта. Т.е. можно получить указатель на структуру по указателю на её член.
Результирующий тип есть базовый класс динамического типа исходного объекта и этот тип является standard-layout классом и не содержит нестатических членов-данных, и результирующий тип - первый базовый класс.
Результирующий тип есть указатель на char, unsigned char или std::byte.
Некоторые реализации ослабляют эти правила в качестве нестандартных расширений языка.
*/

/*
Доп статьи по Приведению Типов: http://cppstudio.com/post/5343/
http://alenacpp.blogspot.com/2005/08/c.html

Источник кода:
https://en.cppreference.com/w/cpp/language/reinterpret_cast


https://www.tutorialspoint.com/what-is-the-size-of-a-pointer-in-c-cplusplus (about pointer size)

Why do we need reinterpret cast for pointers?
https://stackoverflow.com/questions/1845482/what-is-uintptr-t-data-type
There are already many good answers to the part "what is uintptr_t data type". 
I will try to address the "what it can be used for?" part in this post.

Primarily for bitwise operations on pointers. 
Remember that in C++ one cannot perform bitwise operations on pointers. 
For reasons see Why can't you do bitwise operations on pointer in C, and is there a way around this?

Thus in order to do bitwise operations on pointers one would need to cast pointers to type unitpr_t 
and then perform bitwise operations.

Here is an example of a function that I 
just wrote to do bitwise exclusive or of 2 pointers to store in a XOR
 linked list so that we can traverse in both directions like a doubly 
 linked list but without the penalty of storing 2 pointers in each node.



*/

#include <cstdint>
#include <cassert>
#include <iostream>
int f() { return 42; }
int main()
{
    int i = 7;
 
    // pointer to integer and back
    std::uintptr_t v1 = reinterpret_cast<std::uintptr_t>(&i); // static_cast is an error
    std::cout << "The value of &i is 0x" << std::hex << v1 << '\n';
    int* p1 = reinterpret_cast<int*>(v1);
    assert(p1 == &i);
 
    // pointer to function to another and back
    void(*fp1)() = reinterpret_cast<void(*)()>(f);
    // fp1(); undefined behavior
    int(*fp2)() = reinterpret_cast<int(*)()>(fp1);
    std::cout << std::dec << fp2() << '\n'; // safe
 
    // type aliasing through pointer
    char* p2 = reinterpret_cast<char*>(&i);
    if(p2[0] == '\x7')
        std::cout << "This system is little-endian\n";
    else
        std::cout << "This system is big-endian\n";
 
    // type aliasing through reference
    reinterpret_cast<unsigned int&>(i) = 42;
    std::cout << i << '\n';
 
    //[[maybe_unused]] const int &const_iref = i;
    //int &iref = reinterpret_cast<int&>(const_iref); //compiler error - can't get rid of const
    //Must use const_cast instead:  int &iref = const_cast<int&>(const_iref);
}

