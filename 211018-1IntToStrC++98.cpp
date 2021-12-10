/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211018-1IntToStrC++98.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:45:39 by areggie           #+#    #+#             */
/*   Updated: 2021/10/18 18:00:33 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream> // для stringstream
 
int main()
{
	std::stringstream myString;
	// myString << "336000 12.14"; // вставляем (числовую) строку в поток
	myString << "0 12.14 -42 42 0.0f"; // вставляем (числовую) строку в поток
	int Value1;
	double dValue;
	int Value2;
	int Value3;
	float fValue; // не выводит 0.0F 
	
	
 
	myString >> Value1 >> dValue >> Value2 >> Value3 >> fValue;
	std::cout << Value1 << " " << dValue << " " << Value2 << " " << Value3 << " " <<fValue << std::endl;
}