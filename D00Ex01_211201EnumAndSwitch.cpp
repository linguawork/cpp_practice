/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211201d0e1EnumAndSwitch.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:39:42 by areggie           #+#    #+#             */
/*   Updated: 2021/12/01 21:14:12 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://www.youtube.com/watch?v=BMmbQ81lQd0
Перечисляемый тип enum С++. Изучение С++ для начинающих. Урок #124
*/

/* объявление пользовательского типа данных PCState (синтаксический сахар)
https://ru.wikipedia.org/wiki/%D0%A1%D0%B8%D0%BD%D1%82%D0%B0%D0%BA%D1%81%D0%B8%D1%87%D0%B5%D1%81%D0%BA%D0%B8%D0%B9_%D1%81%D0%B0%D1%85%D0%B0%D1%80
*/

/*
Video about ENUM from Intra Piscine
https://elearning.intra.42.fr/notions/c-piscine-c-08/subnotions/structures-de-donnees-les-enums/videos/data-structures-enum

инты представлены как слова
*/

#include<iostream> // std in and stdout


enum PCState // использование enumeration - перечисление
{
	OFF, // 0
	ON, // 1
	SLEEP // 2, последний параметр пишется без запятой
}; // ставится точка с запятой

class PC
{
	private:
		PCState State; //работаем с переменной State типа данных PCState

	public:
		PCState GetState()
		{
			return State;
		}
		
		void SetState(PCState State)
		{
			this->State = State;
		}
		
};

int main()
{
	PC pc;
	pc.SetState(PCState::OFF); // подчеркивание PCState не ошибка а предупреждение Можно компилить
	
	/*
	warning: use of enumeration in a nested name specifier is a C++11 extension
      [-Wc++11-extensions]
	*/

	//вместо if можно использовать SWITCH
	// if (pc.GetState() == PCState::ON)
	// 	std::cout << "PC is on!" << std::endl;

	switch (pc.GetState())
	{
	case PCState::OFF:
		std::cout << "PC is off!" << std::endl;
		break;
	
	case PCState::ON:
		std::cout << "PC is on!" << std::endl;
		break;
	case PCState::SLEEP:
		std::cout << "PC is sleeping!" << std::endl;
		break;
	}
	return 0;
}