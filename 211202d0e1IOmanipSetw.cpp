/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211202d0e1IOmanipSetw.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:57:12 by areggie           #+#    #+#             */
/*   Updated: 2021/12/02 10:01:48 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//https://www.cplusplus.com/reference/iomanip/setw/

// setw example
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setw

int main () 
{
  /*
  setwidth сам делает выравнивание справа
  */
  std::cout << "|" << std::setw(10);
  std::cout << 77 << "|" <<std::endl;
  return 0;
}