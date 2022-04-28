/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D00Ex01_211202IOmanipSetw.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:57:12 by areggie           #+#    #+#             */
/*   Updated: 2022/04/28 20:55:44 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//https://www.cplusplus.com/reference/iomanip/setw/


  /*
  библиотека манипуляций вывода и ввода
  для класса basic_istream и для класса  для класса basic_ostream 
  
  setwidth сам делает выравнивание справа
  */

// setw example
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setw 

int main () 
{
  /*
  setwidth сам делает выравнивание справа
  */
  std::cout << "|" << std::setw(10); //настроить ширину в 10 символов
  // и в строку шириной 10 символов записать цифру 77
  std::cout << 77 << "|" <<std::endl;
  return 0;
}