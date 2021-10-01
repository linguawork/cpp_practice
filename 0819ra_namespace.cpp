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

/*Первый способ указать компилятору искать идентификатор в 
определенном пространстве имен — это использовать название 
необходимого пространства имен вместе с оператором разрешения
 области видимости (::) и требуемым идентификатором. */

int main(void)
{
    std::cout << Boo::doOperation(5, 4) << std::endl; // вызов функции из пространства Boo
	std::cout << Doo::doOperation(5, 4) << std::endl; // вызов функции из пространства Boo
    return 0;
}