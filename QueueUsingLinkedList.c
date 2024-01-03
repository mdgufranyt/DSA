#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Traversal(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("Elements : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(struct Node *f, struct Node *r, int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue is Full\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue(struct Node *f)
{
    int val = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{
    struct Node *f = NULL;
    struct Node *r = NULL;

    Traversal(f);
    printf("Dequeing element %d from the queue \n", dequeue(f));

    enqueue(f, r, 10);
    enqueue(f, r, 20);
    enqueue(f, r, 30);
    printf("Dequeing element %d from the queue \n", dequeue(f));
    Traversal(f);

    return 0;

}