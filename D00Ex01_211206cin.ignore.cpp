/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D00Ex01_211206cin.ignore.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:59:13 by areggie           #+#    #+#             */
/*   Updated: 2021/12/06 16:05:38 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Эта программа показывает ввод именно целочисленного значения
   Для других типов программа выводит сообщение об ошибке
*/

//В учебнике Google Code University C++ раньше был этот код:
//https://coderoad.ru/5131647/%D0%9F%D0%BE%D1%87%D0%B5%D0%BC%D1%83-%D0%BC%D1%8B-%D0%BD%D0%B0%D0%B7%D1%8B%D0%B2%D0%B0%D0%B5%D0%BC-cin-clear-%D0%B8-cin-ignore-%D0%BF%D0%BE%D1%81%D0%BB%D0%B5-%D0%BF%D1%80%D0%BE%D1%87%D1%82%D0%B5%D0%BD%D0%B8%D1%8F-input

// Description: Illustrate the use of cin to get input
// and how to recover from errors.

#include <iostream>
using namespace std;

int main()
{
  int input_var = 0;
  // Enter the do while loop and stay there until either
  // a non-numeric is entered, or -1 is entered.  Note that
  // cin will accept any integer, 4, 40, 400, etc.
  do {
    cout << "Enter a number (-1 = quit): ";
    // The following line accepts input from the keyboard into
    // variable input_var.
    // cin returns false if an input operation fails, that is, if
    // something other than an int (the type of input_var) is entered.
    if (!(cin >> input_var)) {
      cout << "Please enter numbers only." << endl;
      cin.clear();
      cin.ignore(10000,'\n');
    }
    if (input_var != -1) {
      cout << "You entered " << input_var << endl;
    }
  }
  while (input_var != -1);
  cout << "All done." << endl;

  return 0;
}