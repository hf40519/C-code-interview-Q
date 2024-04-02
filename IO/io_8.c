#include <stdio.h>
int main()
{
    char dummy[80];
    printf("Enter a string:\n"); // Hello World
    scanf("%[^r]", dummy);       // 遇到字元r結束 default: %[^\n]
    printf("%s\n", dummy);
    return 0;
}