/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211018Converting.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:50:11 by areggie           #+#    #+#             */
/*   Updated: 2021/10/18 20:35:56 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// istringstream constructors.
#include <iostream>     // std::cout
#include <sstream>      // std::istringstream
#include <string>       // std::string
#include <unistd.h>

// #define INT_MAX 2147483647
// #define INT_MIN -2147483648

using namespace std;

/*
Источники:
https://tylerayoung.com/2014/05/02/stupid-type-conversions-in-c98/
https://ravesli.com/urok-210-potokovye-klassy-i-stroki/
*/

int ft_stoi( std::string s ) 
{
    int i;
    std::istringstream(s) >> i;
	// if (i < INT_MIN || i > INT_MAX)
	// {
	// 	std::cout << "Too big value for int" << std::endl;
	// 	return 0;
	// }
	// std::cout << "here "<< i << std::endl;
    return i;
}

int main()
{
	// std::stringstream myString;
 
	// int nValue = 336000;
	// double dValue = 12.14;
	// myString << nValue << " " << dValue;  // загоняем в буфер с пробелом
 
	// std::string strValue1, strValue2;
	// myString >> strValue1 >> strValue2; // оператор >> делит по пробелам
 
	// std::cout << strValue1 << " " << strValue2 << std::endl;

	int a;
	std::string c;

	std::cout << "Please, enter a string" << std::endl;
	std::cin >> c ;
	std::cout << "You entered " << c  << std::endl;
	// sleep(2);

	a = ft_stoi(c);
	// if (a < INT_MIN || a > INT_MAX)
	// {
	// 	std::cout << "Too big value for int" << std::endl;
	// 	return 0;
	// }
	// else 
		std:: cout << "std::string c converted to int value of: " << a  << std::endl;
	return 0;
}

