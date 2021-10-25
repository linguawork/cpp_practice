/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211025-3Intrad7-4Specialization.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:25:54 by areggie           #+#    #+#             */
/*   Updated: 2021/10/25 22:41:50 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Пример француза для разбора шаблонов общего  и  разного типа
Day07 
Источник https://elearning.intra.42.fr/notions/piscine-c-d07-templates/subnotions/piscine-c-d07-templates-specialization/videos/cpp_bootcamp_-_d07_-_03_specialization

Разобрал две перегрузки операторов и работу с разными типами данныз


*/


#include <iostream>
#include <iomanip>

template<typename T, typename U>  // generic template form 
// общая форма которая будет использоваться для всех типов данных
class Pair
{
	private:
		T const & _lhs;
		U const & _rhs;

		Pair <T, U> (void);

	public:
		Pair< T, U >( T const & lhs, U const & rhs ) : _lhs(lhs), _rhs(rhs)
		{
			std::cout << "Generic template" << std::endl;
			return;
		}

		~Pair< T, U > (void) {}
		
		T const getFst (void) const
		{
			return this->_lhs;
		}

		U const getSnd (void) const
		{
			return this->_rhs;
		}
	
};

//---------------------------------------------------------
// Partially specialized form //  для Инта и для U 
// here is specialization // везде замена одного из шаблонов на INT
template<typename U> // оставили один шаблонный тип
class Pair <int, U> // определили что будем работать с INT и шаблонным типом U
{
	private:
		int  _lhs; // int
		U const & _rhs;

		Pair <int, U> (void);

	public:
		Pair< int, U >( int const & lhs, U const & rhs ) : _lhs(lhs), _rhs(rhs)
		{
			std::cout << "Int partial specialization" << std::endl;
			return;
		}

		~Pair< int, U > (void) {}
		
		int const getFst (void) const
		{
			return this->_lhs;
		}

		U const getSnd (void) const
		{
			return this->_rhs;
		}
	
};

//---------------------------------------------------------

// here is specialization // везде замена на BOOL
template<> // дефолтный без шаблонов
class Pair <bool, bool>  // работаем с двумя типами BOOL and BOOL
{
	private:
		int _n; // can store 2 bits // это позволяет сэкономить немного памяти

		Pair <bool, bool> (void);

	public:
		Pair< bool, bool >(bool lhs, bool rhs )
		{
			std::cout << "Bool/bool specialization" << std::endl;
			this->_n = 0;
			this->_n  |= static_cast<int>(lhs) << 0; // false  bitwise operator OR ( 0 или 1)
			this->_n  |= static_cast<int>(rhs) << 1; //true ( 1 или 0)
			return;
		}

		~Pair<bool, bool > (void) {}
		
		bool getFst (void) const
		{
			return (this->_n & 0x01); //binary operator Ampersand
		}

		bool getSnd (void) const
		{
			return (this->_n & 0x02);
		}
	
};

//---------------------------------------------------------
// Два варианта перегрузки операторов

template<typename T, typename U>
std::ostream & operator << (std::ostream & o, Pair < T, U > const & p)
{
	o << "Pair ( " << p.getFst() << ", " << p.getSnd() << " )";
	return o; 
}


std::ostream & operator << (std::ostream & o, Pair < bool, bool > const & p)
{
	o << std::boolalpha << "Pair( " << p.getFst() << ", " << p.getSnd() << " )";
	return o; 
}

int main (void)
{
	Pair <int, int>				p1(4, 2);
	Pair <std::string, float>	p2( std:: string("Pi"), 3.14f);
	Pair < float, bool >		p3( 4.2f, true );
	Pair < bool, bool >			p4 ( true, false );

	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;
	std::cout << p4 << std::endl;

	return 0;
	
}