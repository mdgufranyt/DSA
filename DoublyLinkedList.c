#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void linkedlistTraversal(struct Node *head)
{
    struct Node *ptr=head;
    while(ptr!=NULL)
    {
        printf("Elements : %d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate memory for node in Linked List in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 12;
    head->prev = NULL;
    head->next = second;

    // Link second and third nodes
    second->data = 39;
    second->prev = head;
    second->next = third;

    // Terminate the Linked List at third node
    third->data = 67;
    third->prev = second;
    third->next = NULL;

    printf("Before Isertion\n");
    linkedlistTraversal(head); // before Insertion

    return 0;
}