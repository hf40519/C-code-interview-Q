#include <stdio.h>

int fun();
int main()
{
    for (fun(); fun(); fun())
    {
        printf("%d ", fun());
    }
    return 0;
} // 8 5 2
int fun()
{
    int static num = 10;
    return num--;
}

// 10; 9; fun() > 6
//     (8) > 7

// 10; 6; fun() > 3
//     (5) > 4

// 10; 3; fun() > 0
//     (2) > 1

// 10; 0 > break