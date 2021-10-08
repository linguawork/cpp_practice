/*
источник: geeksforgeeks.org/string-find-in-cpp/#:~:text=String%20find%20is%20used%20to,of%20starting%20position%20is%200.


*/

// CPP program to demonstrate working of string
// find to search a string
#include <iostream>
#include <string>
  
// using namespace std; Std 98;
  
int main()
{
    std::string str = "geeksforgeeks a computer science";
    std::string str1 = "geeks";
  
    // Find first occurrence of "geeks"
    size_t found = str.find(str1); // found = 0
    if (found != std::string::npos) //const static value npos (все стринги к нему имеют доступ)
        std::cout << "First occurrence is " << found << std::endl;
  
    // Find next occurrence of "geeks". Note here we pass
    // "geeks" as C style string.
    char arr[] = "geeks";
    found = str.find(arr, found+1); //found = 8
    if (found != std::string::npos)
        std::cout << "Next occurrence is " << found << std::endl;
  
    return 0;
}
/*
Метод .find возвращает порядковый номер символа в искомой строке (это может быть текст)
First occurrence is 0 (первая буква в строке)
Next occurrence is 8 (восьмая буква)

Если .find не находит совпадение не символа а (последов череды символов - слов или слова)
то .find возвращает static value -1, которая называется npos
.pos => 0 (иголка найдена)
npos < 0, = -1 (совпадение не найдено)

Об npos хорошо объясняет след видео:
https://www.youtube.com/watch?v=BqnXcsZ7-6w 
*/