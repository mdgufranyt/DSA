#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// LinkedList Traversal
void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Insertion At First
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// Insertion At Index or Between
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Insertion At End
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = NULL;
    p->next = ptr;
    return head;
}

// Insertion After Node
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
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
    head->next = second;

    // Link second and third nodes
    second->data = 39;
    second->next = third;

    // Terminate the Linked List at third node
    third->data = 67;
    third->next = NULL;

    printf("Before Isertion\n");
    linkedlistTraversal(head); // before Insertion

    head = insertAtFirst(head, 8);
    printf("Isertion at first\n");
    linkedlistTraversal(head); // Isertion at first

    head = insertAtIndex(head, 13, 2);
    printf("Isertion in between or index\n");
    linkedlistTraversal(head); // Isertion in between or index

    head = insertAtEnd(head, 70);
    printf("Isertion At End \n");
    linkedlistTraversal(head); // Isertion At End

    head = insertAfterNode(head, third, 790);
    printf("Isertion After Node \n");
    linkedlistTraversal(head); // Isertion Afetr Node

    return 0;
}