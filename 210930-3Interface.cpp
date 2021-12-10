/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0930-3Interface.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 22:54:48 by areggie           #+#    #+#             */
/*   Updated: 2021/10/07 00:22:05 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://www.youtube.com/watch?v=3rUgmjfwS_o
лекция на Simple Code 113

*/

/*
Что такое интерфейс в ООП. 
Интерфейс c++ пример. 
Изучение С++ для начинающих. 
Урок #113
*/

/*
Создаем Абстрактный класс который называется Интерфейсом // хотя в С++ нет интерфейса
Этот класс имеет методы в подклассах-наследниках

В других независимых классах можно создавать методы которые будут принимать
ссылку на Абстрактный класс (Интерфейс) и в мейне можно передавать
в этот метод любой экземпляр подклассов Интерфейса Таких подклассов может быть множество


Абстрактный класс может иметь переменные-члены и имеет как минимум одну 
чистую виртуальную функцию, в то время как интерфейс не имеет переменных-членов, 
и все его методы должны быть чистыми виртуальными функциями.
https://ravesli.com/urok-168-chistye-virtualnye-funktsii-interfejsy-i-abstraktnye-klassy/
*/

#include <iostream>
#include <string>

class InterfaceBicycle // интерфейс - это абстр класс с чисто вирт метод
{
public:
	void virtual TwistTheWheel() = 0; // эти методы ничего не делают и реализация интерфейса происходит через наследников
	// те действия методов происходит через наследников
	void virtual Ride() = 0;
};

class SimpleBicycle : public InterfaceBicycle // на наследуемся от Интерфейса и реализуем Интерфейс
{
public:
	void  TwistTheWheel() //override - не по 98 станд
	{
		std::cout << "метод TwistTheWheel() SimpleBicycle" << std::endl;
	}
	void virtual Ride()
	{
		std::cout << "метод Ride() SimpleBicycle" << std::endl;
	}

};

class SportBicycle : public InterfaceBicycle // на наследуемся от Интерфейса и реализуем Интерфейс
{
public:
	void  TwistTheWheel() //override - не по 98 станд
	{
		std::cout << "метод TwistTheWheel() SportBicycle" << std::endl;
	}
	void virtual Ride()
	{
		std::cout << "метод Ride() SportBicycle" << std::endl;
	}

};

class Human //в классе Human создаем метод который принимает ссылку не Интерфейс
{
public:
	void RideOn(InterfaceBicycle & bicycle) // в класс Human пишем метод который принимает ссылку на объект bicycle
	// класса IBicycle
	{
		std::cout << "Крутим руль" << std::endl;
		bicycle.TwistTheWheel();
		std::cout << "Поехали" << std::endl;
		bicycle.Ride();
	}	
};




int main()
{
	SimpleBicycle sb; //создаем объект sb класса и передаем в класс Human в метод Rideon для реализации
	// SimpleBicycle является реализатором (наследником) Интерфейса
	SportBicycle sportb; 

	
	Human h;
	h.RideOn(sportb); // метод класса Human объекта h должен принимать ccылку на конкретный экземпляр (т.е. Объект)
	// который наследуется (правильно говорить что он реализовывает Интерфейс) от интерфейса IBicycle
	// при передаче по ссылке мы просто пишем без амперсандов 
	
	return 0;
}

 