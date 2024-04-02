#include <stdio.h>

int main(void)
{
    // Pointer 的 size 一般來說 16-bit system 會是 2 bytes，
    // 32-bit 會是 4 bytes，64-bit 會是 8 bytes，但是並不是一定如此。
    char *a[] = {"abc", "def", "ghijk", "lmnop"};
    char *b = a[2];
    
    printf("%d\n", sizeof(a)); // 8*4 (4個pointer大小)
    printf("%d\n", sizeof(b)); // 8 (1個pointer大小)
    printf("%d\n", sizeof(a[2])); // 8 (1個pointer大小)

    printf("%c\n", b[2]);  // i
    printf("%c\n", *(b+2));  // i

    printf("%d\n", sizeof(b[2])); // 1 (1個char大小)
    printf("%d\n", sizeof(*(b+2))); // 1 (1個char大小)
    printf("%d\n", sizeof(*b+2)); // 4 g + 2 = i, i的整數大小

    char ch = 'g';
    printf("%d\n", sizeof(ch)); // 1
    printf("%d\n", sizeof('g')); // 4 返回的是 'g' 的整数表示的大小
    
    return 0;
}