#include <stdio.h>
int main()
{
    int i;
    int j;
    i = 1, 2, 3;           // = operator has higher precedence than comma operator
    printf("i = %d\n", i); // 1

    i = (1, 2, 3);         // () 比 = 優先度高> 在 (1, 2, 3) 中，表达式 1 和 2 都会被计算，
                           // 但是它们的结果都会被丢弃
    printf("i = %d\n", i); // 3

    return 0;
}