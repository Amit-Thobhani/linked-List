#include <iostream>
#include <stack>
#include<bits/c++io.h>
using namespace std;

void reverse_data(char *c,int n){
// reverse the array
    stack <char > s;
    int i;
    for(i=0;i<n;i++)
        s.push(c[i]);
    for(i=0;i<n;i++){
        c[i]= s.top();
        s.pop();
    }
}
struct Node{

    int data;
    struct Node* next;
};

void push(struct Node** head_ref,int new_data){

 struct Node *new_node = new struct Node;

 new_node -> data = new_data;

 new_node -> next = *head_ref;

 *head_ref = new_node;

}

void reverse_list(struct Node **head){
//reverse linked list by stack
    stack <Node *> s;

    struct Node* temp = *head;

    while(temp != NULL){

        s.push(temp);
        temp = temp -> next;
    }
    temp = s.top();
    *head =temp;
    s.pop();

    while(!s.empty()){
        temp -> next =s.top();
        s.pop();
        temp = temp -> next;
    }
    temp ->next = NULL;

}
void printList(struct Node *n){

    printf("\n => ");
    while(n != NULL){

        printf("%d ", n ->data);
        n = n->next;
    }
}
int main()
{
    int i;
    struct Node*head = new struct Node;
    head -> data = 5;
    head -> next = NULL;

    push(&head,6);
    push(&head,7);
    push(&head,8);
    push(&head,9);
    push(&head,0);

    printList(head);

    reverse_list(&head);
    printList(head);
}

/*
op will be
 => 0 9 8 7 6 5
 => 5 6 7 8 9 0
 */
