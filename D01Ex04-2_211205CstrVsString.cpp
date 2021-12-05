/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D01Ex04-2_211205CstrVsString.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:54:26 by areggie           #+#    #+#             */
/*   Updated: 2021/12/05 16:58:24 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Why do we have to use C-str when we have class string in C++?
https://coderoad.ru/7416445/%D0%A7%D1%82%D0%BE-%D1%82%D0%B0%D0%BA%D0%BE%D0%B5-%D0%B8%D1%81%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5-%D1%84%D1%83%D0%BD%D0%BA%D1%86%D0%B8%D0%B8-c_str-%D0%B2-c


В C++ вы определяете свои строки как

std::string MyString;

вместо

char MyString[20];.

While writing C++ code, you encounter some C functions which require C string as parameter.
Like below:

void IAmACFunction(int abc, float bcd, const char * cstring);

Теперь возникла проблема. Вы работаете с C++ и используете строковые переменные std::string . Но эта функция C запрашивает строку C. Как преобразовать std::string в стандартную строку C?

Подобный этому:
*/

void IAmACFunction(int abc, float bcd, const char * cstring);// пример функции в C стиле
// для обработки в С++

std::string MyString;
// ...
MyString = "Hello world!";
// ...
IAmACFunction(5, 2.45f, MyString.c_str());

//!!!!!!!!Вот для чего нужен c_str() .