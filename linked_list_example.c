//#include <stdio.h>
#include "insert.h"
//#include <stdlib.h>

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;



    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 1;
    head ->next = second;

    second -> data = 3;
    second -> next =third;

    third -> data = 5;
    third -> next = NULL;

    printList(head);

    push(&head,0);
    printList(head);

    insertAfter(head -> next,2);
    printList(head);

    append(&head,6);
    printList(head);

    delete_node(&head,1);
    printList(head);

    pdelete_node(&head,4);
    printList(head);

    getCount(&head);

    deleteList(&head);
    printList(head);
    //printf("\n%u",sizeof(struct Node)); it is 8
    return 0;
}
