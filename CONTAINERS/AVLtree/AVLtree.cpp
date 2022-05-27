/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AVLtree.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:45:45 by areggie           #+#    #+#             */
/*   Updated: 2022/05/27 17:16:33 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Abdul Bari Очень хорошо рассказывает о AVL tree (решает проблему высоты BST)

	источник:
		https://www.youtube.com/watch?v=jDM6_TnYIqE&t=1026s
		(в этом видео я добавил time-code)


	Если сравнивать AVL tree и RBtree,  в AVL для балансировки используется
	больше операций сдвигов чем в красном черном дереве. И как следствие, 
	AVL работает медленнее чем RB tree

	в RBtree помогает ускориться наличие маркировки нод цветом


	на этом сайте https://visualgo.net/en/bst можно посмотреть визуализацию
	работы AVL tree
	
	
*/

#include<iostream>
#include<cstdio>
#include<sstream>
#include<algorithm>
#define pow2(n) (1 << (n))

using namespace std;

struct avl {
   int d;
   struct avl *l;
   struct avl *r;
}*r; // r is a pointer to the structure (interesting way of declaring)

class avl_tree {
   public:
      int height(avl *);
      int difference(avl *);
      avl *rr_rotat(avl *);
      avl *ll_rotat(avl *);
      avl *lr_rotat(avl*);
      avl *rl_rotat(avl *);
      avl * balance(avl *);
      avl * insert(avl*, int);
      void show(avl*, int);
      void inorder(avl *);
      void preorder(avl *);
      void postorder(avl*);
	  void print2DUtil(avl *, int space);
		void print2D(avl *);
	  
      avl_tree() {
         r = NULL;
      }
};

int avl_tree::height(avl *t) {
   int h = 0;
   if (t != NULL) {
      int l_height = height(t->l);
      int r_height = height(t->r);
      int max_height = max(l_height, r_height);
      h = max_height + 1;
   }
   return h;
}
int avl_tree::difference(avl *t) {
   int l_height = height(t->l);
   int r_height = height(t->r);
   int b_factor = l_height - r_height;
   return b_factor;
}
avl *avl_tree::rr_rotat(avl *parent) {
   avl *t;
   t = parent->r;
   parent->r = t->l;
   t->l = parent;
   cout<<"Right-Right Rotation";
   return t;
}
avl *avl_tree::ll_rotat(avl *parent) {
   avl *t;
   t = parent->l;
   parent->l = t->r;
   t->r = parent;
   cout<<"Left-Left Rotation";
   return t;
}
avl *avl_tree::lr_rotat(avl *parent) {
   avl *t;
   t = parent->l;
   parent->l = rr_rotat(t);
   cout<<"Left-Right Rotation";
   return ll_rotat(parent);
}
avl *avl_tree::rl_rotat(avl *parent) {
   avl *t;
   t = parent->r;
   parent->r = ll_rotat(t);
   cout<<"Right-Left Rotation";
   return rr_rotat(parent);
}
avl *avl_tree::balance(avl *t) {
   int bal_factor = difference(t);
   if (bal_factor > 1) {
      if (difference(t->l) > 0)
         t = ll_rotat(t);
      else
         t = lr_rotat(t);
   } else if (bal_factor < -1) {
      if (difference(t->r) > 0)
         t = rl_rotat(t);
      else
         t = rr_rotat(t);
   }
   return t;
}

avl *avl_tree::insert(avl *r, int v) {
   if (r == NULL) {
      r = new avl;
      r->d = v;
      r->l = NULL;
      r->r = NULL;
      return r;
   } else if (v< r->d) {
      r->l = insert(r->l, v);
      r = balance(r);
   } else if (v >= r->d) {
      r->r = insert(r->r, v);
      r = balance(r);
   } return r;
}

void avl_tree::show(avl *p, int l) {
   int i;
   if (p != NULL) {
      show(p->r, l+ 1);
      cout<<" ";
      if (p == r)
         cout << "Root -> ";
      for (i = 0; i < l&& p != r; i++)
         cout << " ";
         cout << p->d;
         show(p->l, l + 1);
   }
}
void avl_tree::inorder(avl *t) {
   if (t == NULL)
      return;
      inorder(t->l);
      cout << t->d << " ";
      inorder(t->r);
}

void avl_tree::preorder(avl *t) {
   if (t == NULL)
      return;
      cout << t->d << " ";
      preorder(t->l);
      preorder(t->r);
}

void avl_tree::postorder(avl *t) {
   if (t == NULL)
      return;
      postorder(t ->l);
      postorder(t ->r);
      cout << t->d << " ";
}

/***************************print function added with graphics *************/
/*I inserted this function into the class public methods and wrote the function below*/

#define COUNT 10
// Function to print binary tree in 2D
// It does reverse inorder traversal
void avl_tree::print2DUtil(avl *r, int space)
{
	// Base case
	if (r == NULL)
		return;

	// Increase distance between levels
	space += COUNT;

	// Process right child first
	avl_tree::print2DUtil(r->r, space);

	// Print current node after space
	// count
	printf("\n");
	for (int i = COUNT; i < space; i++)
		printf(" ");
	printf("%d\n", r->d);

	// Process left child
	avl_tree::print2DUtil(r->l, space);
}

// Wrapper over print2DUtil()
void avl_tree::print2D(avl *r)
{
// Pass initial space count as 0
avl_tree::print2DUtil(r, 0);
}





int main() 
{
   int c, i;
   avl_tree avl;
   
   while (1) 
   {
      cout << "1.Insert Element into the tree" << endl;
      cout << "2.show Balanced AVL Tree" << endl;
      cout << "3.InOrder traversal" << endl;
      cout << "4.PreOrder traversal" << endl;
      cout << "5.PostOrder traversal" << endl;
      cout << "6.Print tree" << endl;
		cout << "7.Exit" << endl;
      cout << "Enter your Choice: ";
      cin >> c;
      switch (c) {
         case 1:
            cout << "Enter value to be inserted: ";
            cin >> i;
            r = avl.insert(r, i);
         break;
         case 2:
            if (r == NULL) {
               cout << "Tree is Empty" << endl;
               continue;
            }
            cout << "Balanced AVL Tree:" << endl;
            avl.show(r, 1);
            cout<<endl;
         break;
         case 3:
            cout << "Inorder Traversal:" << endl;
            avl.inorder(r);
            cout << endl;
         break;
         case 4:
            cout << "Preorder Traversal:" << endl;
            avl.preorder(r);
            cout << endl;
         break;
         case 5:
            cout << "Postorder Traversal:" << endl;
            avl.postorder(r);
            cout << endl;
         break;

		case 6:
		cout << "Print Tree from left to right:" << endl;
		avl.print2D(r); // r is pointer to the structure
		cout << endl;
        break;
		
         case 7:
            exit(1);
         break;
         default:
            cout << "Wrong Choice" << endl;
      }
   }
   return 0;
}


