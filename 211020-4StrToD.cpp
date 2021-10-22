/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211020-4StrToD.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:16:19 by areggie           #+#    #+#             */
/*   Updated: 2021/10/20 15:32:05 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//пример использования функции strtod
#include <iostream>
#include <cstdlib>
 
int main()
{
//   char szOrbits[] = "365.24 29.53";
	char szOrbits = "36524123431234 2984736589327";
	char * ptrEnd;
	double d1 = strtod (szOrbits, &ptrEnd),          // преобразовать первое число
		
         d2 = strtod (ptrEnd, NULL);               // преобразовать второе число
	 		std::cout << d1 << std::endl;
		 	std::cout << d2 << std::endl;
	
	double d3 = static_cast<double>(atof(szOrbits)); // проверка вывода каста
		std::cout<< "d3 " << d3 << std::endl;
	

	 
  std::cout << "Луна совершает в год " << (d1 / d2) << " оборотов вокруг землиn";
  return 0;
}