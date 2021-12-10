/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211020-2RunTimeClass.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:07:43 by areggie           #+#    #+#             */
/*   Updated: 2021/10/20 10:19:15 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Класс RUNTIME_ERROR
основные числовые значения сабджекта входят в стд 98

Пример использования класса runtime_error
источник: https://stackoverflow.com/questions/1569726/difference-stdruntime-error-vs-stdexception

std::exception should be considered (note the considered) the abstract base 
of the standard exception hierarchy. This is because there is no mechanism 
to pass in a specific message (to do this you must derive and specialize what()). 
There is nothing to stop you from using std::exception and for simple applications 
it may be all you need.

std::runtime_error on the other hand has valid constructors 
that accept a string as a message. When what() is called a const char pointer is returned 
that points at a C string that has the same string as was passed into the constructor.

*/

// Псевдокод, пример использования runtime_error
try
{
    if (badThingHappened)
    {
         throw std::runtime_error("Something Bad happened here");
    }
}
catch(std::exception const& e)
{
    std::cout << "Exception: " << e.what() << "\n";
} 