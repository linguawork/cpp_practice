/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211019-9CharLimits.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:04:16 by areggie           #+#    #+#             */
/*   Updated: 2021/10/19 21:04:19 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <iostream>
#include <ostream>


// source: https://stackoverflow.com/questions/8672534/how-to-get-stdnumeric-limitscharmin-value
int main()
{
    int minc = std::numeric_limits<char>::min();
    unsigned maxc = std::numeric_limits<char>::max();

    std::cout << minc << std::endl;
    std::cout << maxc << std::endl;
}