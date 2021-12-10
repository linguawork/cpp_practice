/*
Источник кода: https://ravesli.com/urok-53-prostranstva-imen/
Продолжения кода из папки 210905namespaceconflict
*/


/*
Даже при размещении одноименной фукнции в хедер файлах в разных пространствах имен произошла ошибка 

main.cpp:17:18: error: use of undeclared identifier 'doOperation'
std::cout << doOperation(5, 4); // какая версия doOperation() выполнится здесь?                 ^
1 error generated.

Причина ошибки:
Случилось так, что когда мы попытались вызвать функцию doOperation(),
компилятор заглянул в глобальное пространство имен в поисках определения doOperation(). 
Однако, поскольку ни одна из наших версий doOperation() 
не находится в глобальном пространстве имен, 
компилятор не смог найти определение doOperation() вообще!


Существует два разных способа сообщить компилятору,
 какую версию doOperation() следует использовать: 
 через оператор разрешения области видимости или 
 с помощью using-стейтментов (о них мы поговорим на следующем уроке).
(Подробности в файле 210905ravesli_namespace.cpp)

*/

#include <iostream>
#include "boo.hpp"
#include "doo.hpp"
 
int main()
{
    std::cout << doOperation(5, 4); // какая версия doOperation() выполнится здесь?
    return 0;
}