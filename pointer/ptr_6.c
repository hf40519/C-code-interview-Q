#include <stdio.h>
#include <stdlib.h>

void fun(int **a)
{
    *a = (int *)malloc(sizeof(int));
    // (int *)malloc(numElements * sizeof(int));
    // (int *)calloc(num_elements, sizeof(int)); // 初始化數值為0
    // if malloc return 為NULL表示分配失敗
    // or 使用static，避免被release掉
    // static int arr[] = {1, 2, 3, 4, 5};
    // *a = arr;
}

int main()
{
    int *p = NULL;
    fun(&p);

    // *p = 6;
    p[0] = 1;
    p[1] = 2;

    printf("%d\n", *p);
    printf("%d\n", *(p + 1));

    // 修改内存大小
    // ptr = (int *)realloc(ptr, new_size * sizeof(int));
    // 释放动态分配的内存
    // free(ptr);

    return (0);
}