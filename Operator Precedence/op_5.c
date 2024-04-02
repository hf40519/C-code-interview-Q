#include <stdio.h>

int main()
{
    int a = 5, b = 7, c;
    c = a++ +b;                     // a++ + b
    printf("%d, %d, %d\n", a, b, c); // 6, 7, 12
    return 0;
    // *(ptr++)

    
}