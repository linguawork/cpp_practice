/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   210929-1AbstractClass_Polymorphism.cpp             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:57:03 by areggie           #+#    #+#             */
/*   Updated: 2021/12/11 19:36:25 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://www.youtube.com/watch?v=y2tqQf2mdeA
// лекция на Simple Code 104
*/

/*
Абстрактный класс с++ пример. 
Чисто виртуальная функция. 
virtual. //override. 
Полиморфизм ООП C++ #104
*/

/*
Polymorphism
Аbstract Class // Это базовый класс. Если в этом базовом классе есть хотя бы один ЧИСТО виртуальный метод (который = 0 и ничего не
реализует (хотя иногда он может иметь реализацию) ) то такой класс называется абстрактным

Так как абстрактный класс ничего не реализует он создается ради удобства систематизации наследуемых
классов в один какой-то абстрактный класс. Пример абстрактный класс оружия который может иметь
наследуемые классы огнестрельного и холодного оружия

An abstract class is a class that is designed to be specifically used as a base class. 
An abstract class contains at least one pure virtual function. 
You declare a pure virtual function by using a pure specifier ( = 0 ) in the declaration 
of a virtual member function in the class declaration.
Source: https://www.ibm.com/docs/en/zos/2.4.0?topic=only-abstract-classes-c
*/

/*
!!! В абстрактных классах могут быть как виртуальные так и обычные методы
!!! МЫ НЕ МОЖЕМ СОЗДАВАТЬ ОБЪЕКТ АБСТРАКТНОГО КЛАССА

Абстрактный класс может иметь переменные-члены и имеет как минимум одну 
чистую виртуальную функцию, в то время как интерфейс не имеет переменных-членов, 
и все его методы должны быть чистыми виртуальными функциями.
https://ravesli.com/urok-168-chistye-virtualnye-funktsii-interfejsy-i-abstraktnye-klassy/
*/

/* 
программа игрока который использует разное оружие для стрельбы
Код размещен в ВК в группе Simple Code: 
https://vk.com/topic-142292681_35943080
http://cpp.sh/2xnzn


*/


#include <iostream>
#include <string>


class Weapon // Пример Абстрактного класса
{
public:
	virtual void Shoot() = 0;
};

class Gun : public Weapon
{
public:
	void Shoot() //override
	{
		std::cout << "BANG!" << std::endl;
	}
};

class SubmachineGun :public Gun
{
public:
	void Shoot() //override
	{
		std::cout << "BANG! BANG! BANG!" << std::endl;
	}
};

class Bazooka :public Weapon
{
public:
	void Shoot() //override
	{
		std::cout << "BADABUB!!!" << std::endl;
	}
};

class Knife :public Weapon
{
public:
	void Shoot() //override
	{
		std::cout << "VJUH!!!" << std::endl;
	}

};

class Player
{
public:
	void Shoot(Weapon* weapon)
	{
		weapon->Shoot();
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Gun gun;

	SubmachineGun machinegun;

	Bazooka bazooka;

	Knife knife;

	Player player;
	player.Shoot(&knife);

	// system("pause");
	return 0;
}
