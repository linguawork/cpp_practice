/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211008-2VirtualDistructor.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 22:50:58 by areggie           #+#    #+#             */
/*   Updated: 2021/10/08 22:57:48 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

источник:
http://cpp-reference.ru/articles/virtual-destructor/

Объяснение сути виртуального диструктора:

В функции main указателю на базовый класс присваивается адрес 
динамически создаваемого объекта производного класса Derived. 
Затем через этот указатель объект разрушается. 
При этом наличие виртуального деструктора базового класса обеспечивает
вызовы деструкторов всех классов в ожидаемом порядке, 
а именно, в порядке, 
обратном вызовам конструкторов соответствующих классов.


Cуществует правило - если базовый класс предназначен для полиморфного использования,
 то его деструктор должен объявляться виртуальным.
*/


#include <iostream>
 
using namespace std;
 
// Вспомогательный класс
class Object  
{
  public:
    Object() { cout << "Object::ctor()" << endl; }
   ~Object() { cout << "Object::dtor()" << endl; }
};
 
// Базовый класс
class Base 
{
  public:
    Base() { cout << "Base::ctor()" << endl; }
    virtual ~Base() { cout << "Base::dtor()" << endl; } 
    virtual void print() = 0;
};
 
// Производный класс
class Derived: public Base 
{
  public:
    Derived() { cout << "Derived::ctor()" << endl; }
   ~Derived() { cout << "Derived::dtor()" << endl; }    
    void print() {}   
    Object  obj;
};
 
int main ()
{
    Base * p = new Derived;
    delete p;
    return 0;
}