#include <stdio.h>
#include <stdlib.h>
#define SIZEOF(arr) (sizeof(arr) / sizeof(arr[0]))

void merge(int arr[], int left, int mid, int right)
{
    int n_left = mid - left + 1;
    int n_right = right - mid;

    int L[n_left], R[n_right]; // 建立copied array

    // ---- copy array value to copied array (防止對array排序時覆蓋到left right序列) ---- //
    for (int i = 0; i < n_left; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n_right; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n_left && j < n_right)
    {
        if (L[i] < R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n_left)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n_right)
    {
        arr[k] = L[j];
        j++;
        k++;
    }
}

void sort(int arr[], int left, int right)
{
    if (left == right)
        return;
    // ---- merge sort (divid) ---- //
    int mid = (left + right) / 2;
    sort(arr, left, mid);      // left
    sort(arr, mid + 1, right); // right
    // ---- merge sort (merge) ---- //
    merge(arr, left, mid, right);
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
    sort(arr, 0, arr_len - 1);
    print_arr(arr, arr_len);
    return 0;
}