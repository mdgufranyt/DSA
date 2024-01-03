#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {8, 11, 2, 6, 25, 78, 16, 30, 98};
    int size = sizeof(arr) / sizeof(int);
    int element = 11;

    int index = linearSearch(arr, size, element);
    printf("The Element %d Found at Index %d \n", element, index);

    return 0;
}