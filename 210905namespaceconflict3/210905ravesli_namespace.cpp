#include <iostream>
/* https://ravesli.com/urok-53-prostranstva-imen/#toc-1 */

// Namespace - Пространство Имен
namespace Boo
{
    // Эта версия doOperation() принадлежит пространству имен Boo
    int doOperation(int a, int b)
    {
        return a + b;
    }
}

namespace Doo
{
    // Эта версия doOperation() принадлежит пространству имен Doo
    int doOperation(int a, int b)
    {
        return a - b;
    }
}

// int main()
// {
//     std::cout << doOperation(5, 4); // какая версия doOperation() здесь выполнится?
//     return 0;
// }


// Доступ к пространству имен через оператор разрешения области видимости (::)

/* 
Первый способ указать компилятору искать идентификатор в 
определенном пространстве имен — это использовать название 
необходимого пространства имен вместе с оператором разрешения
области видимости (::) и требуемым идентификатором. 
*/

int main(void)
{
    std::cout << Boo::doOperation(5, 4) << std::endl; // вызов функции из пространства Boo
	std::cout << Doo::doOperation(5, 4) << std::endl; // вызов функции из пространства Boo


    /*Также этот оператор можно использовать без какого-либо префикса (например, ::doOperation).
     В таком случае мы ссылаемся на глобальное пространство имен.*/
    return 0;
}