/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211202d0e2_HowInitStaticVar.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:41:54 by areggie           #+#    #+#             */
/*   Updated: 2021/12/02 18:59:03 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
источник https://ravesli.com/urok-124-staticheskie-peremennye-chleny-klassa/
*/

/* 
    Урок №124. Статические переменные-члены класса
*/



/*
Здесь мы определили статическую переменную-член класса и 
инициализировали её значением 3. Если же инициализатор не предоставлен,
 то C++ инициализирует s_value значением 0.

Обратите внимание, данное определение статического члена 
не подпадает под действия спецификаторов доступа: 
вы можете определить и инициализировать s_value, 
даже если он будет private (или protected).

Если класс определен в заголовочном файле, 
то определение статического члена обычно помещается в 
файл с кодом класса (например, в Anything.cpp). 
Если класс определен в файле .cpp, 
то определение статического члена обычно пишется 
непосредственно под классом. Не пишите определение статического члена 
класса в заголовочном файле (подобно глобальным переменным). 
Если этот заголовочный файл подключают больше одного раза, 
то вы получите несколько определений одного члена, 
что приведет к ошибке компиляции.
*/



 
#include <iostream>
 
class Anything
{
public:
    static int s_value; // объявляем статическую переменную-член
};
 
int Anything::s_value = 3; // определяем статическую переменную-член
 
int main()
{
    // Примечание: Мы не создаем здесь никаких объектов класса Anything
 
    Anything::s_value = 4;
    std::cout << Anything::s_value << '\n';
    return 0;
}

/* 
Есть несколько обходных путей определения 
статических членов внутри тела класса. 
Во-первых, если статический член является 
константным интегральным типом (к которому относятся и char, и bool) 
или константным перечислением, то статический член может быть
 инициализирован внутри тела класса:
*/

// class Anything
// {
// public:
//     static const int s_value = 5; // статическую константную переменную типа int можно объявить и инициализировать напрямую
// };

/*
Поскольку здесь статическая переменная-член является целочисленной
константой, то дополнительной строки явного определения вне тела 
класса уже не требуется.

Во-вторых, начиная с C++11 статические члены constexpr любого типа данных, 
поддерживающие инициализацию constexpr, могут быть инициализированы внутри 
тела класса.
*/