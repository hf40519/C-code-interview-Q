#include <stdio.h>

int main()
{
    int x, a = 0;
    x = sizeof(a++) ? printf("Geeks for Geeks\n") : 0;
    // sizeof 0 = sizeof int = 4
    // sizeof 是一個編譯時運算符，
    // 因此在編譯時 sizeof 及其運算元被結果值取代。根本不計算操作數a++
    
    printf("Value of x:%d\n", x); // 16
    printf("Value of a:%d", a); // 0
    return 0;
}