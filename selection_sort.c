#include <stdio.h>

#define MAX_SIZE 100

void printArray(int Array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", Array[i]);
    }
}

void selectionSort(int Arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (Arr[j] < Arr[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = Arr[minIndex];
        Arr[minIndex] = Arr[i];
        Arr[i] = temp;
    }
}

int main()
{
    int size;
    int Array[MAX_SIZE];

    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size > MAX_SIZE || size <= 0)
    {
        printf("Invalid size! Please enter a number between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &Array[i]);
    }

    printf("Array before sorting:\n");
    printArray(Array, size);

    selectionSort(Array, size);

    printf("\nArray after sorting:\n");
    printArray(Array, size);

    return 0;
}