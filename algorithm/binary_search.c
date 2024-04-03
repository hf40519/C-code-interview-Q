#include <stdio.h>
#include <stdlib.h>
#define SIZEOF(arr) (sizeof(arr) / sizeof(arr[0]))

void search(int *arr, int arr_len, int target)
{
    // ---- binary search ---- //
    int left = 0, right = arr_len - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            printf("find %d in index %d", target, mid);
            return;
        }
        if (arr[mid] < target) // target在右側
        {
            left = mid + 1;
        }
        else // target在左側
        {
            right = mid - 1;
        }
    }
    printf("target %d not found", target);
}

int main()
{
    int arr[] = {30, 40, 50, 60, 70, 80};
    int target;
    printf("Enter search number: ");
    scanf("%d", &target);
    int arr_len = SIZEOF(arr);
    search(arr, arr_len, target);
    return 0;
}