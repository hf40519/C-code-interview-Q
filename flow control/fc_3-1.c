#include <stdio.h>

int main()
{
    static int i;
    for (i++; ++i; i++)
    {
        printf("%d ", i);
        if (i == 6)
            break;
    }
    return 0;
} // 2 4 6

// 1; 2; i++ > 3
//     (2)

// 1; 4; i++ > 5
//     (4)

// 1; 6, i++
//     (6) > break