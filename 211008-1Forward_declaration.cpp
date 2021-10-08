/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211008-1Forward_declaration.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:27:57 by areggie           #+#    #+#             */
/*   Updated: 2021/10/08 21:58:26 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://www.youtube.com/watch?v=ZwaE-JM7smI
лекция на Simple Code 140
#pragma once #endif #ifndef 
*/

/*
Многофайловый проект | 
Защита от повторного включения | 
Изучение С++ для начинающих. 
Урок #140
*/

/*
К упр 03 of CPP Day04
Чтобы хедеры не подключались несколько раз то можно определять
библиотеки через #ifndef #define #endif

#pragma once  // использовать хедер только один раз поддерживается несколькими компиляторами включая clang++
https://ru.wikipedia.org/wiki/Pragma_once



Forward declaration

https://stackoverflow.com/questions/9906402/should-one-use-forward-declarations-instead-of-includes-wherever-possible?rq=1
Если есть указатель какого-то класса среди функций предпочтительней просто
сделать forward declaration: объявление прототипа класса вместо включения нужного header

http://microsin.net/programming/arm/forward-declaration.html
forward declaration означает декларирование идентификатора 
(обозначающего такой объект, как тип, переменная или функция) до того, 
как программист дал ему полное определение.

*/