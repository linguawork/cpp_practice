/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211020-1Infinity.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 09:38:16 by areggie           #+#    #+#             */
/*   Updated: 2021/10/20 10:00:25 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>

/*
Класс NUMERIC LIMITS
основные числовые значения сабджекта входят в стд 98

источник: https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/types/numeric_limits/infinity.html

*/

int main()
{
    double max = std::numeric_limits<double>::max();
    double inf = std::numeric_limits<double>::infinity();
 
    if(inf > max)
        std::cout << inf << " is greater than " << max << '\n';

	std::cout << inf << '\n'; // просто выводит inf
	std::cout << max << '\n'; // вывод double max
}