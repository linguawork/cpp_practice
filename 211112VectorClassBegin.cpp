/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211112VectorClassBegin.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:39:39 by areggie           #+#    #+#             */
/*   Updated: 2021/11/12 17:12:37 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://www.cplusplus.com/reference/vector/vector/begin/
Реализованный в STL контейнер-класс Vector 
имеет member function BEGIN:

iterator begin();
const_iterator begin() const;


НА https://www.cplusplus.com/reference/vector/vector/push_back/ 
указаны методы шаблонных контейнеров -классов


*/


// vector::begin/end
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector;
  for (int i=1; i<=5; i++) myvector.push_back(i);

  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}