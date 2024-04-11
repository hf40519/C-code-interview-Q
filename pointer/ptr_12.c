#include <stdio.h>

int main()
{
    char arr[] = "geeksforgeeks";
    printf("%d\n", sizeof(arr)); // 14 > include '\0'

    char arr2[3] = "123";         // 沒空間填 '\0' 所以長度是3
    printf("%d\n", sizeof(arr2)); // 3

    char *arr3[] = {"123", "456"};
    printf("%d\n", sizeof(arr3)); // 16 (pointer陣列大小)

    return 0;
}