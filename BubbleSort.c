#include <stdio.h>

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // for pass !!
    {
        printf("Working On Pass Number %d \n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++) // for comparison in each pass !!
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        return;
    }
}

int main()
{
    int arr[] = {2,1, 3, 4, 5, 6, 7};
    int n = 6;

    printf("Array Elements Before Bubble Sort : ");
    PrintArray(arr, n);

    bubbleSort(arr, n);
    printf("Array Elements After Bubble Sort : ");
    PrintArray(arr, n);

    return 0;
}