#include <iostream>
//namesspaces - пространство имен 
//https://ravesli.com/urok-53-prostranstva-imen/#toc-1
// псевдонимы в С++

namespace Boo
{
	namespace Doo
	{
		const int g_x = 7;
	}
}
 
namespace Foo = Boo::Doo; // Foo теперь считается как Boo::Doo  и является псевдонимомо
 
int main()
{
	std::cout << Foo::g_x; // это, на самом деле, Boo::Doo::g_x
	return 0;
}