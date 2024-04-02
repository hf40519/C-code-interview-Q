#include <stdio.h>

int main()
{
    enum A
    {
        i = 10,
        j = (int)10.01,
        k = 'A'
    };

    // 等價於 >
    // const int i = 10, j = 10;
    // const char k = 'A';

    // enum
    // {
    //     i = 20
    // };  // enum 為const 變數名稱不可重複定義

    // printf("%d\n", ++k); // enum為const

    enum A a = i;

    printf("%d\n", i);
    printf("%d\n", j);
    printf("%c\n", k);
    printf("%d\n", a);
    return 0;
}