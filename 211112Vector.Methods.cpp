/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211112Vector.Methods.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:41:31 by areggie           #+#    #+#             */
/*   Updated: 2021/11/12 18:50:51 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://stackoverflow.com/questions/55134897/does-stringcapacity-reserve-count-terminating-null


vector.at(1), переход к элементу массива (с проверкой за выход из массива)
но его минус - долго работает потому что все время проверяет выход за массив
vector.clear(), очистка от всех элементов массива
vector.pushback(), добавление элемента в конец массива
vector.popback(), удаление последнего элемента массива
vector.size()  - подсчет элементов в дин массиве без терм нуля (ячеек в массиве система может выделить и больше)
vector.capacity() - подсчет выделенных под дин массив ячеек (больше чем фактич элементов в массиве) те  факт емкость

*/