#include <stdio.h>

int main()
{
    char arr[] = "geeksforgeeks";
    printf("%d", sizeof(arr)); // 14> include '\0'
    return 0;
}