#include <stdio.h>
int main()
{
    int a = 1;
    switch (a)
    {
        int b = 20; // switch 语句內及 case 标签中不允许声明变量
    case 1:
        printf("b is %d\n", b); // garbage value
        break;
    default:
        printf("b is %d\n", b);
        break;
    }
    return 0;
}