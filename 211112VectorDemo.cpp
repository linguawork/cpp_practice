/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211112VectorDemo.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:49:57 by areggie           #+#    #+#             */
/*   Updated: 2021/11/12 17:12:18 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Источник кода https://ravesli.com/urok-197-kontejnery-stl/#toc-0

НА https://www.cplusplus.com/reference/vector/vector/push_back/ указаны методы шаблонных контейнеров -классов

*/

#include <iostream> 
#include <vector>
 
int main()
{
 
    std::vector<int> vect;
    for (int count=0; count < 5; ++count)
        vect.push_back(10 - count); // добавляем числа в конец массива //от 10 - счетчик (0,1, 2 ...)
	
	std::cout << "The vector size is " <<vect.size() << std::endl;
    for (int index=0; index < vect.size(); ++index)
	{

        std::cout << vect[index] << ' ';

	}
 
    std::cout << '\n';
}