/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211020-3ConvertWithStoi.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:07:23 by areggie           #+#    #+#             */
/*   Updated: 2021/10/20 11:08:51 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <istream>

/*
Источники:
https://tylerayoung.com/2014/05/02/stupid-type-conversions-in-c98/
https://ravesli.com/urok-210-potokovye-klassy-i-stroki/

не лучшая библиотека для вывода
*/

static int ft_stoi( std::string s ) 
{
    int i;
    std::istringstream(s) >> i;
    return i;
}