#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;

    printf("%p \n", a);  // 000000000061FE00  array a 的第一個元素
    printf("%p \n", &a); // 000000000061FE00 array a 本身的 address
    printf("%p \n", &p); // 000000000061FDF8 (p本身的址)

    int *p1 = (int *)(&a + 1);            // array a 本身的 address + 1 > 加上整個array的大小 (5*4=20 bytes)
    printf("%d, %d \n", *(a + 1), (*p1)); // 2, 0(undefined behavior, could be anything)

    int *p2 = (int *)(a + 1);             // array a 的第一個元素位址+1
    printf("%d, %d \n", *(a + 1), (*p2)); // 2, 2

    return 0;
}