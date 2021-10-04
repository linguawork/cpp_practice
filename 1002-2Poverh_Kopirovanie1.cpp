/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1002-2Poverh_GlubokoeKopirovanie.cpp               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 23:56:22 by areggie           #+#    #+#             */
/*   Updated: 2021/10/04 20:13:46 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/*
https://ravesli.com/urok-145-poverhnostnoe-i-glubokoe-kopirovanie/

*/

/*
Урок №145. Поверхностное и глубокое копирование
*/

/*
Этот урок к 04day of cpp

Код поверхностного копирования
*/

#include <iostream> 
#include <cassert>
 
class Drob
{
private:
    int m_numerator;
    int m_denominator;
 
public:
    // Конструктор по умолчанию
    Drob(int numerator=0, int denominator=1) :
        m_numerator(numerator), m_denominator(denominator)
    {
        assert(denominator != 0); // обещаем что не будет равен нулю
    }
	// Конструктор копирования
    Drob(const Drob &d) :
        m_numerator(d.m_numerator), m_denominator(d.m_denominator)
    {
    }
 
    Drob& operator= (const Drob &drob);
	
    friend std::ostream& operator<<(std::ostream& out, const Drob &d1);
};
 
std::ostream& operator<<(std::ostream& out, const Drob &d1)
{
	out << d1.m_numerator << "/" << d1.m_denominator;
	return out;
}

// Перегрузка оператора присваивания
Drob& Drob::operator= (const Drob &drob)
{
    // Проверка на самоприсваивание
    if (this == &drob)
        return *this;
 
    // Выполняем копирование
    m_numerator = drob.m_numerator;
    m_denominator = drob.m_denominator;
 
    // Возвращаем текущий объект, чтобы иметь возможность выполнять цепочку операций присваивания
    return *this;
}