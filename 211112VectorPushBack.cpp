/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211112VectorPushBack.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:58:01 by areggie           #+#    #+#             */
/*   Updated: 2021/11/12 17:12:54 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

НА https://www.cplusplus.com/reference/vector/vector/push_back/ 
указаны методы шаблонных контейнеров -классов


Appends the given element value to the end of the container.
https://en.cppreference.com/w/cpp/container/vector/push_back

не компилится
*/

#include <vector>
#include <iostream>
#include <iomanip>
 
// int main()
// {
//     std::vector<std::string> letters;
 
//     letters.push_back("abc");
//     std::string s = "def";
//     letters.push_back(std::move(s));
 
//     std::cout << "vector holds: ";
//     for (auto&& i : letters) std::cout << std::quoted(i) << ' ';
//     std::cout << "\nMoved-from string holds " << std::quoted(s) << '\n';
// }




/*

The code compiles
Источник кода https://ravesli.com/urok-197-kontejnery-stl/#toc-0
*/

// #include <iostream> 
// #include <vector>
 
// int main()
// {
 
//     std::vector<int> vect;
//     for (int count=0; count < 5; ++count)
//         vect.push_back(10 - count); // добавляем числа в конец массива
 
//     for (int index=0; index < vect.size(); ++index)
//         std::cout << vect[index] << ' ';
 
//     std::cout << '\n';
// }



/*
The code compiles
Источник кода https://www.cplusplus.com/reference/vector/vector/push_back/
*/
// vector::push_back
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector;
  int myint;

  std::cout << "Please enter some integers (enter 0 to end):\n";

  do {
    std::cin >> myint;
    myvector.push_back (myint); // добавляем числа в конец массива
  } while (myint);

  std::cout << "myvector stores " << int(myvector.size()) << " numbers.\n";

  return 0;
}