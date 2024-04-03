#include <stdio.h>
#include <stdlib.h>
#define SIZEOF(arr) (sizeof(arr) / sizeof(arr[0]))

void sort(int *arr, int arr_len)
{
    // ---- bubble sort ---- //
    int i, j;
    int is_swap;
    for (i = 0; i < arr_len - 1; i++)
    {
        is_swap = 0;
        for (j = 0; j < arr_len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // swap
            {
                is_swap = 1;
                int tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
        if (!is_swap)
            return;
    }
}

void print_arr(int *arr, int arr_len)
{
    int i;
    for (i = 0; i < arr_len; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}

int main()
{
    int arr[] = {80, 30, 40, 70, 50, 60};
    int arr_len = SIZEOF(arr);
    print_arr(arr, arr_len);
    sort(arr, arr_len);
    print_arr(arr, arr_len);
    return 0;
}