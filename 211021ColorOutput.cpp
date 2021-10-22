/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211021ColorOutput.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:32:01 by areggie           #+#    #+#             */
/*   Updated: 2021/10/21 16:39:09 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*

Пример вывода красного цвета в консоли
https://www.it-swarm.com.ru/ru/command-line/izmenenie-cveta-teksta-i-fona-terminala/961240548/

*/

using namespace std;
int	main(int argc, char **argv)
{

		std::cerr << "\e[0;38;5;196m" << "I am testing colors and this is RED" << "\e[0m" << endl;

		std::cerr << "\e[0;38;5;194m" << "I am testing colors and this is RED" << "\e[0m" << endl;
    
    return 0;
}