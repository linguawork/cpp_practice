/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D01Ex04-3_211205Cstr.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:03:55 by areggie           #+#    #+#             */
/*   Updated: 2021/12/05 17:06:38 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://www.cplusplus.com/reference/string/string/c_str/

для удоства работы со строкой объект класса string 
иногда лучше преобразовать в С -строку через метод .c_str()
*/


// strings and c-strings
#include <iostream>
#include <cstring>
#include <string>

int main ()
{
  std::string str ("Please split this sentence into tokens");

  char * cstr = new char [str.length()+1];
  std::strcpy (cstr, str.c_str());

  // cstr now contains a c-string copy of str

  char * p = std::strtok (cstr," ");
  while (p!=0)
  {
    std::cout << p << '\n';
    p = std::strtok(NULL," ");
  }

  delete[] cstr;
  return 0;
}