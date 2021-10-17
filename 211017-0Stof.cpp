/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211017-0Stof.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:36:16 by areggie           #+#    #+#             */
/*   Updated: 2021/10/17 20:43:59 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://www.cplusplus.com/reference/string/stof/
*/

/*
Convert string to float
*/

/*
Этот урок к CPP day06


*/


/*

*/

// stof example
#include <iostream>   // std::cout
#include <string>     // std::string, std::stof

int main ()
{
  std::string orbits ("686.97 365.24");
  std::string::size_type sz;     // alias of size_t

	std::cout << "orbits = " << orbits << std::endl;
  float mars = std::stof (orbits,&sz);
  std::cout << "sz = "<< sz << std::endl;
  std::cout << "mars = "<< mars << std::endl;
  float earth = std::stof (orbits.substr(sz));
   std::cout << "orbits.substr(sz) = "<< orbits.substr(sz) << std::endl;
  std::cout << "One martian year takes " << (mars/earth) << " Earth years.\n";
  return 0;
}