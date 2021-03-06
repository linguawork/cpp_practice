

/* https://www.youtube.com/watch?v=nMM98LVJn-U /
// лекция на Simple Code (У Сергея немного запутанно и может ввести в заблуждение)
// поэтому предварительно можно почитать https://ravesli.com/urok-130-vvedenie-v-peregruzku-operatorov/

// https://www.youtube.com/watch?v=Qn6mu9l6Xj8
// доп лекция на [it-efrem] CODE & ROBOTS



/* 
Перегрузка операторов пример. ООП.
 Перегрузка оператора присваивания. 
 C++ Для начинающих. Урок#83
*/

#include <iostream>
#include <string>

/*

к дню 02 упр00 по ++

Нужно дописать код из урока (взять пример француза)

Перегрузка оператора - это авторская реализация оператора (любого) под свои типы данных
(которые компилятор не сможет реализовать через свои встроенные функции перегрузок
операторов)
ПО сути это предоставление программисту права переделать операторы (например + или -)
под свое видение (но это работа только с типами данных которые сам программер создавал)

this -> n (= это lhs left hand side operator)
а то что подается в функцию является rhs

пример ниже

Очень МОЩНЫЙ ИНСТРУМЕНТ но нужно быть осторожным (Стрелять себе в ногу - это про этот инструмент)
*/

Integer & Integer:: operator=(Integer const &rhs) // пример из 
// программы французов
{
	std::cout << "Assignation operator called from" << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

}
