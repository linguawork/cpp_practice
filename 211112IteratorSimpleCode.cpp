/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211112IteratorSimpleCode.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:34:15 by areggie           #+#    #+#             */
/*   Updated: 2021/11/12 23:29:17 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

/*
	https://stackoverflow.com/questions/39022787/error-non-aggregate-type-vectorint-cannot-be-initialized-with-an-initialize
	You need to switch on std C11, to compile please type: clang++ -std=c++11 [filename]


	ЛЕКЦИЯ НА Simple Code
	https://www.youtube.com/watch?v=jLPqLW2Bp_w&t=305s
	Итераторы STL | Библиотека стандартных шаблонов (stl) | Уроки | C++ | #2
	
*/
#define NORMAL	"\033[0m" 		//все атрибуты по умолчанию
#define BLACK	"\033[0;30m" 
#define RED		"\033[0;31m"      
#define GREEN	"\033[0;32m"   
#define YELLOW	"\033[0;33m"   
#define BLUE	"\033[0;34m"       
#define MAGENTA "\033[0;35m"  	//фиолетовый цвет знаков   
#define CYAN	"\033[0;36m"    //цвет морской волны знаков
#define GRAY	"\033[0;37m" 

int main()
{
	//Scope 1
	{
		std::cout << MAGENTA << "Scope1: Вывод первого элемента вектора" << NORMAL << std::endl;
		std::vector<int> myVector = { 1, 9, 44, 442, 676, 78 };

		std::vector<int>::iterator it;

		it = myVector.begin();

		std::cout << *it << std::endl; // должны получить 1 (первый элемент)
	}

	//Scope2
	{
		std::cout << MAGENTA << "Scope2: Замена первого элемента вектора и вывод" << NORMAL << std::endl;
		std::vector<int> myVector = { 1, 9, 44, 442, 676, 78 };

		std::vector<int>::iterator it;

		it = myVector.begin();

		*it = 1000; // через разыменование кладем в первый элемент значение

		std::cout << *it << std::endl; // должны получить 1 (первый элемент)
	}

	//Scope3
	{
		std::cout << MAGENTA << "Scope3: Итерация к след элементу вектора и вывод" << NORMAL << std::endl;
		std::vector<int> myVector = { 1, 9, 44, 442, 676, 78 };

		std::vector<int>::iterator it;

		it = myVector.begin();

		it++; // итерируемся к след элементу

		std::cout << *it << std::endl; // должны получить 9 (второй элемент)
	}

	//Scope4
	{
		std::cout << MAGENTA << "Scope4: Итерация ко второму элементу вектора и вывод" << NORMAL << std::endl;
		std::vector<int> myVector = { 1, 9, 44, 442, 676, 78 };

		std::vector<int>::iterator it;

		it = myVector.begin();

		it+=2; // итерируемся к след элементу

		std::cout << *it << std::endl; // должны получить 44 (второй элемент)
	}

	//Scope6 - цикл
	{

	}

	//Scope7 - цикл с константами
	{

	}

	//Scope8 - цикл с реверсив итератором
	{

	}

	//Scope9 - функция advance
	{

		std::cout << MAGENTA << "Scope9: Переход к нужному элементу вектора" << NORMAL << std::endl;
		std::vector<int> myVector = { 1, 9, 44, 442, 676, 78 };
		std::vector<int>::iterator it = myVector.begin();
		// std::cout << *(it+3) << std::endl; // должны получить 442 (второй элемент)
		advance(it, 3);
		std::cout << *it << std::endl; // должны получить 442 (второй элемент)
	}

	//Scope10 - функция insert
	{

		std::cout << MAGENTA << "Scope10: Вывод в цикле, вставка, снова вывод в цикле" << NORMAL << std::endl;
		std::vector<int> myVector = { 1, 9, 44, 442, 676, 78 };
		std::vector<int>::iterator it = myVector.begin();

		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl;
			

			
		std::cout << " insert " << std::endl;
		myVector.insert(it, 999); // так как it у нас первый элемент то на его место вставляем
		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl;
		
	}

		//Scope11 - функция insert it++
	{

		std::cout << MAGENTA << "Scope11: Вывод в цикле, вставка на второе место, снова вывод в цикле" << NORMAL << std::endl;
		std::vector<int> myVector = { 1, 9, 44, 442, 676, 78 };
		std::vector<int>::iterator it = myVector.begin();

		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl;
			

			
		std::cout << " insert " << std::endl;
		it++; 
		myVector.insert(it, 999); // так как it уже второй элемент то на его место вставляем
		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl;
	
	}

	//Scope12 - функция insert + advance
	{

		std::cout << MAGENTA << "Scope12: Вывод в цикле, вставка на конкретное место через advance, снова вывод в цикле" << NORMAL << std::endl;
		std::vector<int> myVector = { 1, 9, 44, 442, 676, 78 };
		std::vector<int>::iterator it = myVector.begin();
		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl;
			

			
		std::cout << " insert " << std::endl;
		advance(it, 5);// переход к пятому элементу
		myVector.insert(it, 999); // так как it уже пятый элемент то на его место вставляем
		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl;
		
	}

	//Scope13 - функция insert + erase (position)
	{

		std::cout << MAGENTA << "Scope12: Вывод в цикле, вставка на конкретное место через advance, снова вывод в цикле. Erase и вывод" << NORMAL << std::endl;
		std::vector<int> myVector = { 1, 9, 44, 442, 676, 78 };
		std::vector<int>::iterator it = myVector.begin();
		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl;
			

			
		std::cout << " insert " << std::endl;
		advance(it, 5);// переход к пятому элементу
		myVector.insert(it, 999); // так как it уже пятый элемент то на его место вставляем
		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl;



		std::cout << " erase " << std::endl;
		std::vector<int>::iterator itErase = myVector.begin();
		myVector.erase(itErase); //так как itErase  первый элемент, то он и стирается
		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl; 
	}

	//Scope14 - функция insert + erase 
	{

		std::cout << MAGENTA << "Scope14: Вывод в цикле, вставка на конкретное место через advance, снова вывод в цикле. Erase второго элемента и вывод" << NORMAL << std::endl;
		std::vector<int> myVector = { 1, 9, 44, 442, 676, 78 };
		std::vector<int>::iterator it = myVector.begin();
		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl;
			

			
		std::cout << " insert " << std::endl;
		advance(it, 5);// переход к пятому элементу
		myVector.insert(it, 999); // так как it уже пятый элемент то на его место вставляем
		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl;



		std::cout << " erase " << std::endl;
		std::vector<int>::iterator itErase = myVector.begin();
		itErase++;
		myVector.erase(itErase); //так как itErase  второй элемент, то он и стирается
		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl; 
	}

		//Scope15 - функция insert + erase (range)
	{

		std::cout << MAGENTA << "Scope15: Вывод в цикле, вставка на конкретное место через advance, снова вывод в цикле. Erase второго элемента и вывод" << NORMAL << std::endl;
		std::vector<int> myVector = { 1, 9, 44, 442, 676, 78 };
		std::vector<int>::iterator it = myVector.begin();
		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl;
			

			
		std::cout << " insert " << std::endl;
		advance(it, 5);// переход к пятому элементу
		myVector.insert(it, 999); // так как it уже пятый элемент то на его место вставляем
		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl;



		std::cout << " erase " << std::endl;
		std::vector<int>::iterator itErase = myVector.begin();

		myVector.erase(itErase, itErase + 3 ); //удаление с первого по четвертый
		for(std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++ )
			std::cout<< *i << std::endl; 
	}
	
	

	
	return 0;
}