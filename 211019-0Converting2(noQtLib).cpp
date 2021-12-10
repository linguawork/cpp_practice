/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211019ConvertingToDiffTypes.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:41:08 by areggie           #+#    #+#             */
/*   Updated: 2021/10/19 13:48:40 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
КОНВЕРТАЦИЯ В ДРУГИЕ ТИПЫ ДАННЫХ

Источники:
https://stackoverflow.com/questions/7663709/how-can-i-convert-a-stdstring-to-int

The second link is FYR:
https://stackoverflow.com/questions/194465/how-to-parse-a-string-to-an-int-in-c 


Conclusions

Summing up, the best solution is C++11 std::stoi() or, as a second option,
 the use of Qt libraries. All other solutions are discouraged or buggy.

 https://stackoverflow.com/questions/27541138/is-stdstring-inferior-to-qstring
 
 (Qstring работает для Unicode)
 @Martin, actually, as others have said (and I had forgot when I was writing my comment), 
 QString uses copy-on-write approach (COW). 
 C++98 allowed for COW, and there were implementations that used it. 
 C++11 no longer allows for COW, so, 
 if you consider only C++11-compliant implementations, 
 the question makes sense as it is.


https://www.gnu.org/software/libc/manual/html_node/Parsing-of-Integers.html
Function: long int strtol (const char *restrict string, char **restrict tailptr, int base)


https://www.cplusplus.com/reference/sstream/istringstream/istringstream/
*/

// _________________________________________________ //
#include <QString> //такая либа даже не определяется
#include <string>

	bool ok;
	std::string;

	int i = QString::fromStdString(str).toInt(&ok);
	if (!ok)
		// Error management

	float f = QString::fromStdString(str).toFloat(&ok);
	if (!ok)
		// Error management 

	double d = QString::fromStdString(str).toDouble(&ok);
	if (!ok)
		// Error management 

// ---------------------------------------------------- //

/*
Хотел написать на разрещенной по 98 стандарту либе но она не включена на маках в школе
*/




