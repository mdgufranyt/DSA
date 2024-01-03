#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Circular LinkedList Traversal
void linkedlistTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {

        printf("Elements : %d\n", ptr->data);
        ptr = ptr->next;

    } while (ptr != head);
}

// Insert At First in Circular Linked List
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for node in Linked List in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 12;
    head->next = second;

    // Link second and third nodes
    second->data = 39;
    second->next = third;

    // Terminate the Linked List at third node
    third->data = 67;
    third->next = fourth;

    fourth->data = 87;
    fourth->next = head;

    printf("Before Isertion\n");
    linkedlistTraversal(head); // before Insertion

    head = insertAtFirst(head, 54);
    printf(" Insertion at first \n");
    linkedlistTraversal(head); // Insertion at first

    return 0;
}