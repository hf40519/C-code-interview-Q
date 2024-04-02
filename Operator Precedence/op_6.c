#include <stdio.h>

int main(void)
{
    int i = 40 >> 5 << 3 >> 2 << 1;
    printf("%d", i); // 4, 如果搞錯成5不能先把後面的總結起來，因為在過程中會有 1 bit 被 right shift 掉
    return 0;
}