#include <stdio.h>
#include <stdlib.h>
#define SIZEOF(arr) (sizeof(arr) / sizeof(arr[0]))

void sort(int *arr, int arr_len)
{
    // ---- insertion sort ---- //
    int i, j;
    for (i = 1; i < arr_len; i++)
    {
        int curr = arr[i];
        j = i - 1;
        while (j >= 0 && curr < arr[j]) // move to find propper insert loc
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
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