#include <stdio.h>
#include <stdlib.h>

void printIntArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *p = arr;

    *(p++) += 10;             // equals to *p++ += 10; (誇號可省略) (先加後移動ptr)
    printIntArray(arr, size); // 10 1 2 3 4

    *(++p) += 10;             // equals to *++p += 10; (誇號可省略) (先移動ptr後加)
    printIntArray(arr, size); // 10 1 12 3 4

    return 0;
}