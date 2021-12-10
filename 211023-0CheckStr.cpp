/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211023CheckStr.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 21:22:42 by areggie           #+#    #+#             */
/*   Updated: 2021/10/23 22:05:24 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// int main(int argc,char *argv[]) 
// {
//   int i = 1;
//   int j;
//   char thisChar;
  
//   for (i = 1; i < argc; i++) 
//   { 
//     thisChar = argv[i][0]; 
//     printf("%c\tAscii: %d\n", thisChar, thisChar); // распечатывает первый символ
//   }
//   return 0;
// } 


// int main(int argc,char *argv[]) 
// {
//   int i = 1;
//   int j;
//   char thisChar;

//   while (argv[i][j]) 
//   {  
//     printf("%c\tAscii: %d\n", j, j); // распечатывает номера элементов
// 	j++;
//   }
//   return 0;
// } 


int main(int argc, char **argv) {
    if (argc >= 2) {
        printf("The first 3 letters of the first argument is:\n");
        int i = 0;
        while (i < 3 && argv[1][i]) {
            printf("%d = %c\n", i, argv[1][i]);
            i++;
        }
        printf("The full word was: %s\n\n", argv[1]);
    }

    if (argc >= 3) {
        printf("The first 3 letters of the second argument is:\n");
        int j = 0;
        while (j < 3 && argv[2][j]) {
            printf("%d = %c\n", j, argv[2][j]);
            j++;
        }
        printf("The full word was: %s\n", argv[2]);
    }
}