/*
Рассмотрим пример такого конфликта. boo.h и doo.h — это
 заголовочные файлы с функциями, 
 которые выполняют разные вещи, 
 но имеют одинаковые имена и параметры.

 Если boo.h и doo.h скомпилировать отдельно, 
 то всё пройдет без инцидентов. Однако, 
 соединив их в одной программе, 
 мы подключим две разные функции, 
 но с одинаковыми именами и параметрами, 
 в одну область видимости (глобальную), 
 а это, в свою очередь, приведет к конфликту имен. 
 В результате, компилятор выдаст ошибку. 

In file included from main.cpp:4:
./doo.hpp:3:5: error: redefinition of 'doOperation'
int doOperation(int a, int b)
    ^
./boo.hpp:5:5: note: previous definition is here
int doOperation(int a, int b)
    ^
1 error generated.

 Для решения подобных проблем и добавили в язык С++
  такую концепцию, как пространства имен.
 */
#include <iostream>
#include "boo.hpp"
#include "doo.hpp"
 
int main()
{
    std::cout << doOperation(5, 4); // какая версия doOperation() выполнится здесь?
    return 0;
}