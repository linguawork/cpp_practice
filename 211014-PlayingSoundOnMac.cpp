/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211014-PlayingSoundOnMac.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 22:56:31 by areggie           #+#    #+#             */
/*   Updated: 2021/10/14 23:36:38 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <cstdlib> // for system
#include <unistd.h>// for sleep

int main() {
    system("afplay mix.wav &"); // работает c afplay ... &
	sleep(2);
	
	system("killall afplay"); // закрывает все аудиопотоки если находит иначе выдает ошибку "No matching processes belonging to you were found"
    // ...

	// 	std::cout << "\a" << std::endl; // выдает звук если расскомментить и запустить через ITerm (отдельный терминал)
	
    return 0;
}