#include <stdio.h>
#include <string.h>

char *fun()
{
    return "awake";
}
int main()
{
    char str[20]; // 無指定值 每一index初始值為'\0'
    printf("enter string\n");
    scanf("%s", str);                  // 1234
    printf("%d\n", strlen(str));       // 4
    printf("%d\n", str[4] == '\0');    // 1
    printf("%d\n", getchar() == '\n'); // '\n'在緩衝區內
    printf("-------\n");

    int val;
    printf("enter int\n");
    scanf("%d", &val);                 // 1234
    printf("%d\n", getchar() == '\n'); // '\n'在緩衝區內
    printf("-------\n");

    char ch;
    printf("enter char\n");
    scanf("%c", &ch);                  // a
    printf("%d\n", getchar() == '\n'); // '\n'在緩衝區內

    return 0;
}