/*
класс string, в классе обращаемся к методу: length
Задание к дню 0 упражнению 00
источник: https://www.cplusplus.com/reference/string/string/length/
*/

// string::length
#include <iostream>
#include <string>

int main ()
{
  std::string str ("Test string"); //(12 символов c терминатором, без него - 11 символов = байтов)
  std::cout << "The size of str is " << str.length() << " bytes.\n";
  return 0;
}