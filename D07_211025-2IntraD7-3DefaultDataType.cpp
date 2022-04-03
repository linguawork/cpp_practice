/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211025-2IntraD7-3Vertex.class.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:40:09 by areggie           #+#    #+#             */
/*   Updated: 2022/04/03 21:26:44 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Пример кода шаблона класса
источник Интры https://elearning.intra.42.fr/notions/piscine-c-d07-templates/subnotions/piscine-c-d07-templates-default-type/videos/cpp_bootcamp_-_d07_-_02_default_type

Француз поясняет свой код

Здесь пример применения дефолтного типа данных в шаблоне в пустых треугольных скобках <> (если не объявлен другой тип)

*/

#include <iostream>
#include <iomanip>

template<typename T = float> // присвоение дефолтного типа данных в шаблон если при вызове не указать явно
class Vertex
{
	private:
		T const _x;
		T const _y;
		T const _z;

		Vertex(void);// это объявление конструктора по умолчанию те без праметоров
		// и чтобы не создавались объекты без параметров этот конструктор помещен в поле private
	public:

	
	
	Vertex (T const & x, T const & y, T const & z) : _x(x), _y(y), _z(z) 
	{
		
	}
	~Vertex(){}; // пустой деструктор так как не работаем с malloc (new)
	
	T const & getX() const // француз забыл сделать функции константными
	{
		return this->_x;
	}

	T const & getY() const
	{
		return this->_y;
	}

	T const & getZ() const
	{
		return this->_z;
	}

	//Etc (здесь может быть много функций и расчетов)

};

template<typename T>
std::ostream & operator << (std::ostream & o, Vertex <T> const &v) // перегрузка оператора вывода который принимает Шаблон (встроенный шаблон)
// так как мы не знаем с каким типом данных мы будем работать через шаблон
{
	std::cout.precision(1);
	o << std::setiosflags(std::ios::fixed); //https://www.cplusplus.com/reference/iomanip/setiosflags/ 
	// француз забыл написать STD::
	// //https://classes.mst.edu/compsci1570/outputformatting.htm // about flags: fixed - вывод в нормальном виде
	o << "Vertex ( ";
	o << v.getX() << ", ";
	o << v.getY() << ", ";
	o << v.getZ();
	o << " )";

	return o;
}


int main(void)
{
	Vertex<int> v1(12, 23, 34); // explicit conversion INT
	Vertex<>	v2(12, 23, 34); // implicit conversion FLOAT
	// объявление дефолтного шаблона (который заявлен как float),  в шевронах(угловых скобках) ничего не написано
	// они пустые <>

	std::cout << v1 << std::endl; // применение оператора перегрузки и вывод именно инта
	std::cout << v2 << std::endl; // вывод по дефолту типа данных флоат
	
	return 0;
}