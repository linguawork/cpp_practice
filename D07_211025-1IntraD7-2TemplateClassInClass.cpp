/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211025-1IntraD7-2TemplateClass.cpp                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:40:09 by areggie           #+#    #+#             */
/*   Updated: 2022/04/03 21:18:05 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Использование класса в самом классе (интересно)

Standard Template Library = STL 
Библиотека написанных классов которой можно пользоваться

Плохой пример от французов Лучше пример на Simple Code (без кода )


*/

#include <iostream>
template<typename T>
class List
{
	private:
		T 		_content;
		List<T> * _next;

	public:
		List<T>(T const & content) : _content(content)
		{ 
			//etc
		}
		
		List<T>( List<T> const & list) // в классе можно принимать сам класс
		{
			//etc
		}
		
		~List<T>(void)
		{
			
		}
	
	//Etc
};

int main(void)
{
	List<int> 			a(42);
	List<float> 		b(3.14f);
	List<List <int> > 	c (a);
	
	// etc
	return 0;
}