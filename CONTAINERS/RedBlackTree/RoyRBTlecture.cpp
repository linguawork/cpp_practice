/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RoyRBTlecture.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:16:50 by areggie           #+#    #+#             */
/*   Updated: 2022/05/31 15:53:27 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	I watched the video of Roy about RBT INSERTION https://www.youtube.com/watch?v=UaLIHuR1t8Q
	after watching Rob's vidoes, it is kind of good time of repetition


	I also made  time code:
	Thank you, Mr.Tushar Roy! Clear explanation!
	I kind of double checked with you the rules I learned from Rob Edwards (he gave pseudocode here: https://www.youtube.com/watch?v=nMExd4DthdA), but Rob did not give deletion.:
	13:30 red aunt/uncle leads to ColorFlip (RBB in the triangle of grandparent) after insertion, 
	14:03 black aunt/uncle causes LR - Rotation
	14:52 LR-Rotation (first stage - L), dont change colors
	16:17 LR-Rotation (second stage - R: dragging to right),  ColorFlip (BRR) after rotation
	23:25 Example of a tree with pseudocode!!! Great.
	30:34 Time complexity analysis
	31:51 Code of RBT in Java (it is not easy to understand, need to spend time here)
	36:54 This code is more understandable

*/

/*
	RBT deletion:
	https://www.youtube.com/watch?v=CTvfzU_uNKE&list=PLYlfM6qKBI5indgvpVEzTlMh8sXt_I6XD&index=4
	
	
	1:53 - 3:41 first case: we delete black 30, copy the smallest number of the bigger successors on the right (which has 1 or 0 not null ptrs, meaning less than 2 children (1 or 0)) in place of 30, that is 35.
	then we go down to the source red 35 (red nodes are simply deleted attaching null).
	3:42 - 5:28 second case: we delete black 30, copy the smallest number of the bigger successors which are on the right side of the node to be deleted (which has 1 or 0 not null ptrs, meaning less than 2 children (1 or 0)) in place of 30, that is 35 to copy.
	then we go down to source black 35 (this time it is black and has a red successor). So delete the source black 35, put red successor on its place and make it black.)
	6:10 there are 6 cases to delete a double black node. (6:17 - 8:25 explanation of double black node first)
	8:26-9:08 how 6 cases of deletion work (they are applied one by one from 1 to 6 up to one of the terminal cases: 1, 4, 6)
	
*/