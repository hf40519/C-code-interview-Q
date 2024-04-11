#include <stdio.h>
#include <string.h>

// 结构体示例
struct Person
{
    char name_1[50];
    char *name_2;
    int age;
};

int main()
{
    struct Person p;
    printf("%p, \n", p);

    int arr1[] = {1, 2, 3, 4};
    int *arr2 = arr1;

    arr1[0] = -1;

    printf("%d, \n", arr1[0]); // -1
    printf("%d, \n", arr2[0]); // -1

    return 0;
}