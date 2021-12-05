/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D01Ex04-9_211205IfstreamGetline.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 18:04:46 by areggie           #+#    #+#             */
/*   Updated: 2021/12/05 18:05:18 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//https://www.cplusplus.com/reference/istream/istream/getline/

// istream::getline example
#include <iostream>     // std::cin, std::cout

int main () {
  char name[256], title[256];

  std::cout << "Please, enter your name: ";
  std::cin.getline (name,256);

  std::cout << "Please, enter your favourite movie: ";
  std::cin.getline (title,256);

  std::cout << name << "'s favourite movie is " << title;

  return 0;
}