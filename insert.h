//Header file 

#ifndef INSERT_H_INCLUDED
#define INSERT_H_INCLUDED

#include<stdio.h>
struct Node{
    int data;
    struct Node *next;

};

//difine the diff functions
void push(struct Node** head_ref,int new_data);
void insertAfter(struct Node* pre_node,int new_data);
void append(struct Node **head ,int data);
void delete_node(struct Node** head,int data);
void pdelete_node(struct Node** head, int position);

void deleteList(struct Node **head);

void printList(struct Node *n);


#endif // INSERT_H_INCLUDED
