/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211022-4Srand.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:10:26 by areggie           #+#    #+#             */
/*   Updated: 2021/10/22 14:13:38 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Источник:
https://en.cppreference.com/w/cpp/numeric/random/srand
*/

#include <cstdlib>
#include <iostream>
#include <ctime>
 
int main() 
{
    std::srand(std::time(0)); //use current time as seed for random generator
    int random_variable = std::rand();
    std::cout << "Random value on [0 " << RAND_MAX << "]: " 
              << random_variable << '\n';
}