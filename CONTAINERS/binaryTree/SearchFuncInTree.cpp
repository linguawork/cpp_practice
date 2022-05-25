/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SearchInTree.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:52:02 by areggie           #+#    #+#             */
/*   Updated: 2022/05/25 19:52:51 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*

*/

// C function to search a given key in a given BST
struct node* search(struct node* root, int key)
{
	// Base Cases: root is null or key is present at root
	if (root == NULL || root->key == key)
	return root;
	
	// Key is greater than root's key
	if (root->key < key)
	return search(root->right, key);

	// Key is smaller than root's key
	return search(root->left, key);
}
