#include <stdio.h>
#include <stdlib.h>
#define SIZEOF(arr) (sizeof(arr) / sizeof(arr[0]))
#define PrintInt(expr) printf("%s:%d\n", #expr, (expr)) // # 在 macro 中代表將其後的 argument 轉成字串

int main()
{
    /* The powers of 10 */
    int pot[] = {
        0001, // 1 (8進制) > C/C++中，以0開頭的數字都是八進制的
        0010, // 8 (8進制)
        0100, // 64 (8進制)
        1000  // 1000 (10進制)
    };
    int i;
    for (i = 0; i < SIZEOF(pot); i++)
        PrintInt(pot[i]);
    // pot[i]:1
    // pot[i]:8
    // pot[i]:64
    // pot[i]:1000

    return 0;
}