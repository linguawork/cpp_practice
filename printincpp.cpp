//compile with: clang++ printincpp.cpp 
// then type ./a.out
/* https://ravesli.com/urok-11-sout-cin-i-endl/ */
#include <iostream>
 
// int main()
// {
//     std::cout << "Hello, world!";
//     return 0;
// }

// int main()
// {
//    int a = 7;
//    std::cout << "a is " << a;
//    return 0;
// }

// int main()
// {
//    std::cout << "Hi!";
//    std::cout << "My name is Anton.";
//    return 0;
// }

// int main()
// {
//    std::cout << "Hi!" << std::endl;
//    std::cout << "My name is Anton." << std::endl;
//    return 0;
// }

int main()
{
   std::cout << "Enter a number: "; // просим пользователя ввести любое число
   int a = 0;
   std::cin >> a; // получаем пользовательское число и сохраняем его в переменную a
   std::cout << "You entered " << a << std::endl;
   return 0;

   // Enter a number: 123456789123456789 // это переполнение
// You entered 2147483647
}