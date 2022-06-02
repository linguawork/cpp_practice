/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RoyRBTlecture.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:16:50 by areggie           #+#    #+#             */
/*   Updated: 2022/06/02 19:46:54 by areggie          ###   ########.fr       */
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
	RBT deletion: (Mr.Tushar Roy! Clear explanation!)
	https://www.youtube.com/watch?v=CTvfzU_uNKE&list=PLYlfM6qKBI5indgvpVEzTlMh8sXt_I6XD&index=4
	
	
	1:53 - 3:41 first case: we delete black 30, copy the smallest number of the bigger successors on the right (which has 1 or 0 not null ptrs, meaning less than 2 children (1 or 0)) in place of 30, that is 35.
	then we go down to the source red 35 (red nodes are simply deleted attaching null).
	3:42 - 5:28 second case: we delete black 30, copy the smallest number of the bigger successors which are on the right side of the node to be deleted (which has 1 or 0 not null ptrs, meaning less than 2 children (1 or 0)) in place of 30, that is 35 to copy.
	then we go down to source black 35 (this time it is black and has a red successor). So delete the source black 35, put red successor on its place and make it black.)
	6:10 there are 6 cases to delete a double black node. 
	6:17 - 8:25 explanation of what double black node is
	8:26 - 9:35 how 6 cases of deletion work (they are applied one by one from 1 to 6 up to one of the terminal cases: 1, 4, 6)
	9:35 - 11:57 double black case 4 (easiest, change color only)
	12:00 - 15:10 double black case 6 (before left rotation grandparent and left child can be any color, after L-rotation left child goes to left side and becomes right child of any color.) One question: how can S become any color if it should be black after transformation.
	15:11 -17:54 double black case 3 results in case 1: deletion leads to creating a double black node which becomes black, the left child changes color to RED. This colorflip pushes the double black node to go up  and become root and the situation transforms into case 1, where the double black root becomes just black.
	17:55 - 22:31 case 3 results in case 5: unlike the previous case double black node goes up but this time it is not root and we have case 5, which is about the LtoR rotation-dragging and changing color. Finally after rotation it is not the terminal case and we face the case 6 (22:31 - 24:31).
	24:32 Deletion of the node leads to case 2, which starts in 25:00. 25:54 we make a LtoR rotation (drag from right to left) and change color of the nodes. The transformation leads to case 4, where we simply change colors (27:48).
	28:38 summary and code
*/