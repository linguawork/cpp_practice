/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211019-1Convertion3(C-LikeSolution).cpp            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:50:45 by areggie           #+#    #+#             */
/*   Updated: 2021/10/19 14:28:55 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <iomanip>
// #include <limits>
// #include <cstdlib>
// #include <stdexcept>

/*
КОНВЕРТАЦИЯ В ДРУГИЕ ТИПЫ ДАННЫХ

Источники:
https://stackoverflow.com/questions/194465/how-to-parse-a-string-to-an-int-in-c


Conclusions

The best solution
Fortunately, somebody has already solved all of the above problems.
The C standard library contains strtol and family which have none of these problems.


Pretty simple for something that handles all the error cases and also supports 
any number base from 2 to 36. If base is zero (the default) it will try to convert 
from any base. Or the caller can supply the third argument and specify that the 
conversion should only be attempted for a particular base. 
It is robust and handles all errors with a minimal amount of effort.

Other reasons to prefer strtol (and family):

It exhibits much better runtime performance
It introduces less compile-time overhead (the others pull in nearly 20 times more SLOC from headers)
It results in the smallest code size
There is absolutely no good reason to use any other method.
*/

// enum STR2INT_ERROR { SUCCESS, OVERFLOW, UNDERFLOW, INCONVERTIBLE };

// STR2INT_ERROR str2int (int &i, char const *s, int base = 0)
// {
//     char *end;
//     long  l;
//     errno = 0;
//     l = strtol(s, &end, base);
//     if ((errno == ERANGE && l == LONG_MAX) || l > INT_MAX) {
//         return OVERFLOW;
//     }
//     if ((errno == ERANGE && l == LONG_MIN) || l < INT_MIN) {
//         return UNDERFLOW;
//     }
//     if (*s == '\0' || *end != '\0') {
//         return INCONVERTIBLE;
//     }
//     i = l;
//     return SUCCESS;
// }

// int main()
// {
// 	int number;
// 	STR2INT_ERROR a;
// 	// std::string c; // не можем работать со стринг так как strtol работает с char const *s)
// 	char const *str;

// 	str = "123";

// 	// std::cout << "Please, enter a string" << std::endl;
// 	// std::cin >> str ;
// 	// scanf ( "%s", str, &number);
// 	// std::cout << "You entered " << str  << std::endl;
// 	// sleep(2);

// 	a = str2int(number, str, 10);
// 	std::cout << "The result is " << a << std::endl;
	


// 	return 0;
// }



int str2int (int &i, char const *s, int base = 0)
{
    char *end;
    long  l;
    errno = 0;
    l = strtol(s, &end, base);
    if ((errno == ERANGE && l == LONG_MAX) || l > INT_MAX) {
        return (0);
    }
    if ((errno == ERANGE && l == LONG_MIN) || l < INT_MIN) {
        return (-1);
    }
    if (*s == '\0' || *end != '\0') {
        return (-2);
    }
    i = l;
    return i;
}

int main()
{
	int number;
	int res;
	// std::string c; // не можем работать со стринг так как strtol работает с char const *s)
	char const *str;

	str = "123893";

	// std::cout << "Please, enter a string" << std::endl;
	// std::cin >> str ;
	// scanf ( "%s", str, &number);
	// std::cout << "You entered " << str  << std::endl;
	// sleep(2);

	res = str2int(number, str, 0);
	std::cout << "The result is " << res << std::endl;
	


	return 0;
}


