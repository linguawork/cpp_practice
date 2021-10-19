/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211019-3ConvertionViaCast.Ravesli.cpp              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:09:42 by areggie           #+#    #+#             */
/*   Updated: 2021/10/19 16:01:03 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
Источник: https://ravesli.com/urok-56-yavnoe-preobrazovanie-tipov-dannyh-operatory-casts/
*/

// без приведения типов
// int main()
// {
// int i1 = 11;
// int i2 = 3;
// float x = i1 / i2;
// std::cout << x << std::endl; // вывод остатка от деления
// return 0;
// }


/*
Конвертация C-style не проверяется компилятором во время компиляции, 
поэтому она может быть неправильно использована, 
например, при конвертации типов const или изменении типов данных, 
без учета их диапазонов (что может привести к переполнению: https://ravesli.com/urok-31-tselochislennyj-tip-dannyh-integer/#toc-4).
*/

int main()
{
	int i1 = 11;
	int i2 = 3;
	float x = i1 / i2;
	std::cout << x << std::endl; // вывод остатка от деления
	return 0;
}

/* Использование приведения типов C-style */
// сasting to float
int main()
{
	int i1 = 11;
	int i2 = 3;
	float x = (float)i1 / i2;
	std::cout << x << std::endl;
	return 0;
}



