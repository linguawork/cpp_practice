/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211109-4StaticCast.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:57:31 by areggie           #+#    #+#             */
/*   Updated: 2021/10/19 15:58:26 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
Источник: https://ravesli.com/urok-56-yavnoe-preobrazovanie-tipov-dannyh-operatory-casts/

Оператор static_cast лучше всего использовать для конвертации одного 
фундаментального типа данных в другой:


Основным преимуществом оператора static_cast является проверка его выполнения 
компилятором во время компиляции, что усложняет возможность возникновения 
непреднамеренных проблем.
*/

int main()
{
	char c = 97;
	std::cout << static_cast<int>(c) << std::endl; // в результате выведется 97, а не 'a'


	int i1 = 11;
	int i2 = 3;
	float x = static_cast<float>(i1) / i2;
	std::cout << x << std::endl;
	return 0;
}