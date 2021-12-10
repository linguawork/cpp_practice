/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211014Time.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 22:40:26 by areggie           #+#    #+#             */
/*   Updated: 2021/10/14 22:43:39 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//источник http://www.c-cpp.ru/content/srand
//Следующая программа использует системное время для инициализации функции rand() с исполь­зованием функции srand():
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* инициализация базы временем и вывод первых ста чисел */
int main(void)
{
int i, stime;
long ltime;

/* получение текущего календарного времени */
ltime = time (NULL);
stime = (unsigned int) ltime/2;
srand(stime);
for (i=0; i<10; i++ ) 
	printf("%d ", rand());
return 0;
}