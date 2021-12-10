/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211025TemplateClassIntra.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:40:09 by areggie           #+#    #+#             */
/*   Updated: 2021/10/25 14:59:15 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Standard Template Library = STL 
Библиотека написанных классов которой можно пользоваться

Плохой пример кода от французов Лучше пример на Simple Code
*/

#include <iostream>
template<typename T>
class List
{
	private:
	T 		_content;
	List<T> * _next;

	public:
	
	List<T>(T const &content)
	{
		//etc
	}
	List<T>(List<T> const & list)
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