/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211124GetLine.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:05:42 by areggie           #+#    #+#             */
/*   Updated: 2021/11/24 15:10:17 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://www.cplusplus.com/reference/string/string/getline/?kw=getline
*/

// extract to string
#include <iostream>
#include <string>

int main ()
{
  std::string name;

  std::cout << "Please, enter your first name: ";
  std::getline (std::cin,name);
  std::cout << "Hello, " << name << "!\n";

	std::cout << "Please, add letters or words to your first name: ";
  std::getline (std::cin,name);
  std::cout << "Hello, " << name << "!\n";

std::cout << " You see getline erased the  first name and replaced with the last entered symbols";


  return 0;
}