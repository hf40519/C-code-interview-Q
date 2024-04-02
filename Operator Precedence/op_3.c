#include <stdio.h>

int main()
{
    int x, y = 2, z, a;
    printf("%d\n", a); // 0
    if (x = y % 2)     // x = 0 > if (False)
        z = 2;
    a = 2;
    printf("%d %d ", z, x); // 0 0
    return 0;
}