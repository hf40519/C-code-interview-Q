#include <stdio.h>
#include <stdlib.h>
#define SIZEOF(arr) (sizeof(arr) / sizeof(arr[0]))

void print_arr(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int *ptr = (int *)malloc(4 * sizeof(int));
    if (ptr == NULL)
    {
        printf("malloc failed\n");
        return 0;
    }
    *ptr = 0;
    *(ptr + 1) = 1;
    *(ptr + 2) = 2;
    *(ptr + 3) = 3;
    print_arr(ptr, 4);

    int *new_ptr = (int *)realloc(ptr, 10 * sizeof(int)); // 重新分配
    if (new_ptr == NULL)
    {
        printf("realloc failed\n");
        return 0;
    }
    print_arr(new_ptr, 10);
    printf("%p %p\n", ptr, new_ptr); // (ptr==new_ptr)
    free(new_ptr);
    return 0;
}