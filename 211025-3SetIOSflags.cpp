/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211025-3SetIOSflags.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:15:38 by areggie           #+#    #+#             */
/*   Updated: 2021/10/25 16:48:50 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// setiosflags example
#include <iostream>     // std::cout, std::hex, std::endl
#include <iomanip>      // std::setiosflags

int main () {
  std::cout << std::hex; // выводить 16ричными
  std::cout << std::setiosflags (std::ios::showbase | std::ios::uppercase);
 
  //https://www.cplusplus.com/reference/ios/showbase/  Это по сути прибавление префикса 0x
  //https://www.cplusplus.com/reference/ios/uppercase/ превращение в большую букву
  
  std::cout << 100 << std::endl;
  return 0;
}