#include <stdio.h>

int main()
{
    int i = 0;
    for (i = 0; i < 20; i++)
    {
        switch (i)
        {
        case 0:
            i += 5;
        case 1:
            i += 2;
        case 5:
            i += 5;
        default:
            i += 4;
        }
        printf("%d  ", i); // 16 21 > case 沒有break 所以每個case都會執行下去
    }

    return 0;
}