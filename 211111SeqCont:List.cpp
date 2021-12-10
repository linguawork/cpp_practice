/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211111SeqCont:List.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:30:08 by areggie           #+#    #+#             */
/*   Updated: 2021/11/11 16:30:29 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//https://www.cplusplus.com/reference/list/list/push_back/

// list::push_back
#include <iostream>
#include <list>

int main ()
{
  std::list<int> mylist;
  int myint;

  std::cout << "Please enter some integers (enter 0 to end):\n";

  do {
    std::cin >> myint;
    mylist.push_back (myint);
  } while (myint);

  std::cout << "mylist stores " << mylist.size() << " numbers.\n";

  return 0;
}