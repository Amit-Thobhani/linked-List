#include "insert.h"

void push(struct Node** head_ref,int new_data){

 struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

 new_node -> data = new_data;

 new_node -> next = *head_ref;

 *head_ref = new_node;

}

void insertAfter(struct Node* pre_node,int new_data){

    if(pre_node == NULL){

        printf("can't be NULL");
        return ;
    }

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node -> data = new_data;

    new_node -> next = pre_node -> next;

    pre_node -> next = new_node;
}

void append(struct Node **head ,int data){

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node -> data = data;

    new_node -> next = NULL;

    if (*head == NULL){

        *head = new_node;
        return ;
    }
    struct Node *last = *head;

    while(last -> next != NULL)
        last = last -> next;

    last -> next = new_node;
    return;
}

void delete_node(struct Node** head,int data){

    struct Node* last = *head;
    struct Node* second = head;

    if(last != NULL && last -> data == data){

        *head = last -> next;
        free(last);
        return;
    }

    while(last -> data != data){
        second =last;
        last = last -> next;
    }
    second -> next = last -> next;
    free(last);
    return ;
}

void pdelete_node(struct Node** head, int position){

    int count=0;
    struct Node* temp = *head;
    if (*head == NULL )
        return;

    else if( position == 0){

        *head = temp -> next;
        free(temp);
        return;
    }

    while(count<position-1){
        temp = temp -> next;
        count++;
    }

    if(temp->next == NULL || temp -> next == NULL)
        return ;
    struct Node *next;
    next = temp -> next -> next;
    free(temp -> next);
    temp -> next = next;

}

void deleteList(struct Node **head){

    struct Node *next ,*current = *head;

    while(next != NULL){

        next = current -> next;
        free(current);
        current = next;
    }
    *head = NULL;
}

void getCount(struct Node **head){

    int count = 0;
    struct Node *last = *head;
    while(last -> next != NULL){
        count++;
        last = last -> next;
    }
    printf("\ncount => %d",count+1);
}

void printList(struct Node *n){

    printf("\n => ");
    while(n != NULL){

        printf("%d ", n ->data);
        n = n->next;
    }
}
