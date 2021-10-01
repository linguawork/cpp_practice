/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0930-2SpisokInic_sample2.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:23:48 by areggie           #+#    #+#             */
/*   Updated: 2021/09/30 20:47:47 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//продолжение из файла 0930-1SpisokInicializacii.cpp

/*
Можно также добавить возможность caller-у передавать значения 
для инициализации:
*/

#include <iostream>
 
class Values
{
private:
    int m_value1;
    double m_value2;
    char m_value3;
 
public:
    Values(int value1, double value2, char value3='d')
        : m_value1(value1), m_value2(value2), m_value3(value3) 
        // напрямую инициализируем переменные-члены класса
    {
    // Нет необходимости использовать присваивание
    }
 
    void print()
    {
         std::cout << "Values(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
    }
 
};
 
int main()
{
    Values value(3, 4.5); 
    // value1 = 3, value2 = 4.5, value3 = 'd' (значение по умолчанию)
    value.print();
    return 0;
}