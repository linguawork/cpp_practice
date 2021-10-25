/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211025-0Templated07-01Intra.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:38:34 by areggie           #+#    #+#             */
/*   Updated: 2021/10/25 14:26:38 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
на видео французов в Интре (День7 с++) демонстрируется работа разных типов данных 
(даже с применением фукций) через шаблоны

источник: https://elearning.intra.42.fr/notions/piscine-c-d07-templates/subnotions/piscine-c-d07-templates-templates/videos/cpp_bootcamp_-_d07_-_01_templates
*/

#include <iostream>

template <typename T>

T max (T const & x, T const & y)
{
	return( (x>y) ? x : y);
}

int foo(int x)
{
	std::cout << "Long computing time" << std::endl;
	return x;
}

int main (void)
{
	int a = 21; 
	int b = 42;

	std::cout << "<<<<<Явное присвоение типа (int) для шаблона: ";
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int> (a, b) << std :: endl;
	
	std::cout << "<<<<<Скрытое присвоение типа (int) для шаблона: ";
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max(a, b) << std::endl;

	float c = -1.7f;
	float d = 4.2f;

	std::cout << "<<<<<Явное (float) присвоение типа для шаблона: ";
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max<float> (c, d) << std :: endl;

	std::cout << "<<<<<Скрытое (flaot) присвоение типа для шаблона: ";
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max(c, d) << std::endl;

	char e = 'a';
	char f = 'z';

	std::cout << "<<<<<Явное (char) присвоение типа для шаблона: ";
	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max<char> (e, f) << std :: endl; // explicit instaciation
	std::cout << "<<<<<Скрытое (char) присвоение типа для шаблона: ";
	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max(e, f) << std::endl; // implicit instaciation


//no problem here: можно подавать функции и присваивать функцию переменной (так как есть возврат)
	int ret = max<int>(foo(a), foo(b));// explicit instaciation - явная типизация
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << ret << std::endl;

	
	
} 