/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0930-2SpisokInic_sample4.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:23:48 by areggie           #+#    #+#             */
/*   Updated: 2021/09/30 21:10:25 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//продолжение из файла 0930-1SpisokInicializacii.cpp

/*
Список инициализации членов также может использоваться 
для инициализации членов, которые являются классами:
*/

#include <iostream>
 
class A
{
public:
    A(int a) { std::cout << "A " << a << "\n"; }
};
 
class B
{
private:
    A m_a;
public:
    B(int b)
         : m_a(b-1) // вызывается конструктор A(int) для инициализации члена m_a
    {
        std::cout << "B " << b << "\n";
    }
};
 
int main()
{
    B b(7);
    return 0;
}

/* 
При создании переменной b вызывается конструктор B(int) со значением 7.
До того, как тело конструктора выполнится, инициализируется m_a,
вызывая конструктор A(int) со значением 6. Таким образом,
выведется A 6. Затем управление возвратится обратно к конструктору B(),
и тогда уже он выполнится и выведется B 7.
*/
