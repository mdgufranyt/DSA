#include <stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
                }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 6, 8, 11, 16, 25, 30, 78, 98};
    int size = sizeof(arr) / sizeof(int);
    int element = 78;

    int index = binarySearch(arr, size, element);
    printf("The Element %d Found at Index %d \n", element, index);

    return 0;
}