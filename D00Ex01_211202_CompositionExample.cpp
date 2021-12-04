/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211202d0e1_CompositionExample.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:57:14 by areggie           #+#    #+#             */
/*   Updated: 2021/12/02 15:24:08 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* источник кода https://www.linuxtopia.org/online_books/programming_books/thinking_in_c++/Chapter14_012.html

ПРИМЕР КОМПОЗИЦИИ в CPP
*/

#include <iostream>


class Engine {
public:
  void start() const {}
  void rev() const {}
  void stop() const {}
};

class Wheel {
public:
  void inflate(int psi) const {
	  std::cout << "Just inflated to " << psi << std::endl;
  }
};

class Window {
public:
  void rollup() const {
	  std::cout << "the window rolled up" << std::endl;
  }
  void rolldown() const {}
};

class Door {
public:
  Window window;
  void open() const {}
  void close() const {}
};

class Car {
public:
  Engine engine;
  Wheel wheel[4];
  Door left, right; // 2-door
};

int main() {
  Car car;
  car.left.window.rollup(); // в машине в левой двери окно поднять 
  car.wheel[0].inflate(72);

  
} 