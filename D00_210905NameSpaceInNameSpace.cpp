#include <iostream>
/*

https://elearning.intra.42.fr/notions/piscine-c-d00-c-basics/subnotions/piscine-c-d00-c-basics-namespaces/videos/namespaces-b808b721-b1f6-4a1e-b378-07007568181d

https://ravesli.com/urok-53-prostranstva-imen/
вложенные пространства имен


Вложенность пространств имен не рекомендуется использовать,
так как при неумелом использовании увеличивается 
вероятность возникновения ошибок и дополнительно усложняется логика программы.
*/

 
namespace Boo
{
    namespace Doo // одно пространство имен вложено в другое
    {
        const int g_x = 7;
    }
}
 
int main()
{
    std::cout << Boo::Doo::g_x; 
    return 0;
}