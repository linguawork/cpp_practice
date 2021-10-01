/*
источник https://www.cplusplus.com/reference/string/string/erase/
*/


// string::erase
#include <iostream>
#include <string>

int main ()
{
  std::string str ("This is an example sentence.");
  std::cout << "Original: " << str << '\n';
                                           // "This is an example sentence."
  str.erase (10,8);                        //            ^^^^^^^^
  std::cout << "erased example " << str << '\n';
                                           // "This is an sentence."
  str.erase (str.begin()+9);               //           ^
  std::cout << "erased one symbol: n" << str << '\n';
                                           // "This is a sentence."
  str.erase (str.begin()+5, str.end()-9);  //       ^^^^^
  std::cout << "erased from symbol 5 to symbol 9 " << str << '\n';
                                           // "This sentence."
  return 0;
}