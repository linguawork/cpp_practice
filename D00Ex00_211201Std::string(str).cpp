/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D00Ex00_211201Std::string(str).cpp                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:42:05 by areggie           #+#    #+#             */
/*   Updated: 2021/12/13 16:42:09 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//https://www.cplusplus.com/reference/string/string/string/

// string constructor
#include <iostream>
#include <string>
/*
(1) empty string constructor (default constructor)
Constructs an empty string, with a length of zero characters.
(2) copy constructor
Constructs a copy of str.
(3) substring constructor
Copies the portion of str that begins at the character position pos and spans len characters (or until the end of str, if either str is too short or if len is string::npos).
(4) from c-string
Copies the null-terminated character sequence (C-string) pointed by s.
(5) from buffer
Copies the first n characters from the array of characters pointed by s.
(6) fill constructor
Fills the string with n consecutive copies of character c.
(7) range constructor
Copies the sequence of characters in the range [first,last), in the same order.
(8) initializer list
Copies each of the characters in il, in the same order.
(9) move constructor
Acquires the contents of str.
str is left in an unspecified but valid state.
*/
int main ()
{
  std::string s0 ("Initial string");

  // constructors used in the same order as described above:
  std::string s1; //конструктор объекта без строки

  std::string s2 (s0); //конструктор объекта который копирует в себя со строкой
  
  std::string s3 (s0, 8, 3); //вывод объекта строки, начиная с 8ого символа и три следующих
  
  std::string s4 ("A character sequence"); // вывод строки
  
  std::string s5 ("Another character sequence", 12); //вывод до 12 символа
  
  std::string s6a (10, 'x'); // (6) fill constructor
//Fills the string with n consecutive copies of character c.

  std::string s6b (10, 42);      // 42 is the ASCII code for '*', output of the symbol 10 times
  
  std::string s7 (s0.begin(), s0.begin()+7);//(7) range constructor
//Copies the sequence of characters in the range [first,last), in the same order.

  std::cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3;
  std::cout << "\ns4: " << s4 << "\ns5: " << s5 << "\ns6a: " << s6a;
  std::cout << "\ns6b: " << s6b << "\ns7: " << s7 << '\n';
  return 0;
}