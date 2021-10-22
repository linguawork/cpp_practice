/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211022-3BadCastException.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:07:02 by areggie           #+#    #+#             */
/*   Updated: 2021/10/22 12:09:35 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Источник: https://en.cppreference.com/w/cpp/types/bad_cast

Пример ниже:
Оператор dynamic_cast также может использоваться и со ссылками. Работа dynamic_cast со ссылками аналогична работе с указателями,
но поскольку в языке C++ не существует «нулевой ссылки», то dynamic_cast не может возвратить «нулевую ссылку» при сбое. 
Вместо этого, dynamic_cast генерирует исключение типа std::bad_cast :


*/

#include <iostream>
#include <typeinfo>
 
struct Foo { virtual ~Foo() {} };
struct Bar { virtual ~Bar() {} };
 
int main()
{
    Bar b;
    try {
        Foo& f = dynamic_cast<Foo&>(b);
    } catch(const std::bad_cast& e)
    {
        std::cout << e.what() << '\n';
    }
}