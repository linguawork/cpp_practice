/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211024-1TemplateReinterpretCast.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:11:59 by areggie           #+#    #+#             */
/*   Updated: 2022/04/03 19:53:09 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

https://www.tutorialspoint.com/what-is-the-size-of-a-pointer-in-c-cplusplus (about pointer size)

Why do we need reinterpret cast for pointers?
https://stackoverflow.com/questions/1845482/what-is-uintptr-t-data-type
There are already many good answers to the part "what is uintptr_t data type". 
I will try to address the "what it can be used for?" part in this post.

uintptr_t is an unsigned integer type that is capable of storing a data pointer. 
Which typically means that it's the same size as a pointer.

uintptr_t может преобразовать тип указателя void и int ( так как он размером с указатель) 


Primarily for bitwise operations on pointers. 
Remember that in C++ one cannot perform bitwise operations on pointers. 
For reasons see Why can't you do bitwise operations on pointer in C, and is there a way around this?

Thus in order to do bitwise operations on pointers one would need to cast pointers to type unitpr_t 
and then perform bitwise operations.

Here is an example of a function that I 
just wrote to do bitwise exclusive or of 2 pointers to store in a XOR
linked list so that we can traverse in both directions like a doubly 
linked list but without the penalty of storing 2 pointers in each node.

 */


// ПРИМЕР
 template <typename T>
 T* xor_ptrs(T* t1, T* t2)
 {
     return reinterpret_cast<T*>(reinterpret_cast<uintptr_t>(t1)^reinterpret_cast<uintptr_t>(t2));
}
