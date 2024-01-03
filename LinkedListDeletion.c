#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Deleting First Node in Linked List..............................

struct Node *deleteFirstNode(struct Node *head)
{

    struct Node *ptr = head;
    head = head->next;
    free(ptr);

    return head;
}

// Deleting Node in Between or index..............................

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = p->next;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }

    p->next = q->next;
    free(q);

    return head;
}


// deleting Node at last
struct Node *deleteAtLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = p->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);

    return head;
}

// Deleting Node At Given Value in the Linked list..........................

struct Node *deleteAtValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = p->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }

    return head;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    printf("Linked List Before Deletion\n");
    linkedlistTraversal(head);

    head = deleteFirstNode(head);
    printf("\nLinked List After Deletion At First\n");
    linkedlistTraversal(head);

    head = deleteAtIndex(head, 2);
    printf("\nLinked List After Deletion At Index\n");
    linkedlistTraversal(head);

    head = deleteAtLast(head);
    printf("\nLinked List After Deletion At Last\n");
    linkedlistTraversal(head);

    head = deleteAtValue(head, 20);
    printf("\nLinked List After Deletion At Value\n");
    linkedlistTraversal(head);

    return 0;
}