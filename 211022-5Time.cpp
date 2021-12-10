/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211022-5Time.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:15:03 by areggie           #+#    #+#             */
/*   Updated: 2021/10/22 14:15:55 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Источник:
https://en.cppreference.com/w/cpp/chrono/c/time
*/

#include <ctime>
#include <iostream>
 
int main()
{
    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result))
              << result << " seconds since the Epoch\n";
}