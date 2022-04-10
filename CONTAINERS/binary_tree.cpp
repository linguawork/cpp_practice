/*
источник кода https://www.programiz.com/dsa/binary-tree

Простая программа 

*/

// Binary Tree in C++

#include <stdlib.h>
#include <iostream>

using namespace std;


//создаем структуру-поле в котором пропишем нужные переменные
struct node 
{
  int data; // какая-то цифра
  struct node *left; // указатель на саму же структру 
  struct node *right;
};

// New node creation
//  выделение  памяти под структуру на хипе, инициализация переменных структуры 
struct node *newNode(int data) 
{
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}

// Traverse Preorder
//вывод в консоль значений нод структуры(подаем указатель на структуру)
//вывод зигзагом: все левое потом правее все левое
void traversePreOrder(struct node *temp) 
{
  if (temp != NULL) {
    cout << " " << temp->data;
    traversePreOrder(temp->left);// рекурсия с подачей левой ноды
    traversePreOrder(temp->right);// рекурсия с подачей правой ноды
  }
}

// Traverse Inorder
//вывод волной слева направо
void traverseInOrder(struct node *temp) 
{
  if (temp != NULL) {
    traverseInOrder(temp->left);//рекурсия
    cout << " " << temp->data;
    traverseInOrder(temp->right);
  }
}

// Traverse Postorder
//вывод уголком вправо
void traversePostOrder(struct node *temp) 
{
  if (temp != NULL) {
    traversePostOrder(temp->left); //рекурсия
    traversePostOrder(temp->right);
    cout << " " << temp->data;
  }
}

int main() 
{
  struct node *root = newNode(1); // // в родительскую ноду записали через маллок
  root->left = newNode(2); // в левую записали через маллок
  root->right = newNode(3); // в правую
  root->left->left = newNode(4);// под левой еще одна левая (внучка)

  cout << "preorder traversal: ";
  traversePreOrder(root);
  cout << "\nInorder traversal: ";
  traverseInOrder(root);
  cout << "\nPostorder traversal: ";
  traversePostOrder(root);
}