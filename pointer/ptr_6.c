#include <stdio.h>
#include <stdlib.h>

void fun(int **a)
{
    *a = (int *)malloc(sizeof(int));
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

    return (0);
}