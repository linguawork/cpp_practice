/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D01Ex04-1_211205StringMethods.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:37:48 by areggie           #+#    #+#             */
/*   Updated: 2021/12/05 16:49:21 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The difference between C and C++ string.
https://stackoverflow.com/questions/3454900/whats-the-difference-between-c-strings-and-c-strings

https://www.cplusplus.com/reference/string/string/c_str/ (about c string)

In C, strings are just char arrays which, by convention, 
end with a NUL byte. In terms of dynamic memory management, 
you can simply malloc the space for them (including the extra byte).
Memory management when modifying strings is your responsibility.

In C++, strings (std::string) are objects with all the associated automated 
memory management and control which makes them a lot safer and easier to use,
especially for the novice.


C++ strings are much safer,easier,
and they support different string manipulation functions like append,
find,copy,concatenation etc.

one interesting difference between c string and
c++ string is illustrated through following example:
*/

// #include <iostream>                            
// using namespace std;

// int main() 
// {
//     char a[6]; //c string
//     a[5]='y';
//     a[3]='o';
//     a[2]='b';
//     cout<<a; 
//     return 0;
// }
/*ничего не выводит или выводит мусор*/

#include <iostream> 
using namespace std; 
int main() 
{ 
  string a; //c++ string
  a.resize(6);
  a[5]='y';
  a[3]='o';
  a[2]='b';
  cout<<a;
  return 0;
}
/*выводит слов BOY*/