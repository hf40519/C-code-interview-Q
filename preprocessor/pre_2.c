#include <stdio.h>
#define VAR 6

int func(int a)
{
    int m = 3;
#undef VAR
#define VAR 10
    m = 4;
    return m + VAR;
}

int main(void)
{
    int i = 5;
    printf("%d\n", func(i));
    return 0;
}