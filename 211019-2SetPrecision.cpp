/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211019-2SetPrecision.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:59:39 by areggie           #+#    #+#             */
/*   Updated: 2021/10/19 15:02:18 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

/*
Источник: https://coderoad.ru/22515592/%D0%9A%D0%B0%D0%BA-%D0%B8%D1%81%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D1%8C-setprecision-%D0%B2-C


*/

int main()
{
    double num1 = 3.12345678;
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(3); // вывод количества символов после точки
    std::cout << num1 << std::endl;
    return 0;
}