#include <stdio.h>

int main(void)
{
    int x = 10, y = 15;
    x ^= y ^= x ^= y;
    // += -= *= /= %= &= ^= |= <<= >>= 等於系列的關聯性都是右至左
    // x ^= (y ^= (x ^= y))
    // x = 10 = 1 0 1 0
    // y = 15 = 1 1 1 1
    // x ^= y > x = 0 1 0 1
    // y ^= x > y = 1 0 1 0
    // x ^= y > x = 1 1 1 1
    printf("%d %d", x, y); // x = 15, y = 10
    return 0;
}