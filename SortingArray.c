#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[5] = {10, 20, 15, 18, 29};
    int i, item, loc;
    printf("Enter item which want to search : ");
    scanf("%d", &item);
    for (i = 0; i < 5; i++)
    {
        if (a[i] == item)
        {
            loc = i;
            break;
        }
    }

    if (i == 5)
    {
        printf("Element Not Found");
    }
    else
    {
        printf("Item Found at Index %d", loc);
    }
}