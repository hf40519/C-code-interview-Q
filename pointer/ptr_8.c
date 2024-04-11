#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Pointer 的 size 一般來說 16-bit system 會是 2 bytes，
    // 32-bit 會是 4 bytes，64-bit 會是 8 bytes，但是並不是一定如此。
    char arr[] = {1, 2, 3};
    char *p = arr;
    printf(" %d ", sizeof(p));   // 8
    printf(" %d ", sizeof(arr)); // 3

    return 0;
}