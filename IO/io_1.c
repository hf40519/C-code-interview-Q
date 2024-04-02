#include <stdio.h>

int main()
{
    int a;
    printf("%d \n", scanf("%d", &a)); // if success > 1
    
    int b, c;
    printf("%d \n", scanf("%d %d", &b, &c)); // if success > 2

    printf("%d \n", scanf("%d", &a)); // \n > failed 0

    // scanf 的回傳值是成功讀取幾個變數
    // scanf 使用空格、換行符、tab分隔

    return 1;
}