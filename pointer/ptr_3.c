#include <stdio.h>

void printIntArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void ptr_change(int *a, int *b)
{
    int tmp = *b; // b址的值
    *b = *a;      // b址的值 = a址的值
    *a = tmp;     // a址的值 = b址的值
}

int main()
{
    int arr[] = {0, 2, 4, 6, 8};

    printf("%d \n", *arr);    // 0值
    printf("%p \n", arr);     // 0址
    printf("%p \n", &arr[0]); // 0址

    printf("%d \n", *(arr + 1)); // 2值
    printf("%p \n", arr + 1);    // 2址
    printf("%p \n", &arr[1]);    // 2址

    int num = 100;
    int *ptr = &num;

    printf("num: %d, *ptr: %d\n", num, *ptr); // 100 100
    *ptr = 200;
    printf("num: %d, *ptr: %d\n", num, *ptr); // 200 200
    num = 300;
    printf("num: %d, *ptr: %d\n", num, *ptr); // 300 300

    printf("&num: %p, ptr: %p\n", &num, ptr);
    printf("&num: %p, &ptr: %p\n", &num, &ptr); // pointer指向num的址，但pointer本身也是變數也有記憶體位址

    char *str = "Information";
    printf("%s\n", str);
    printf("%s\n", str + 6);
    printf("%c\n", *(str + 6));
    printf("%c\n", str[6]);

    int a = 10, b = 20;

    printf("a: %p, b: %p\n", &a, &b); // a: 000000000061FDEC, b: 000000000061FDE8
    a = 20, b = 10;
    printf("a: %p, b: %p\n", &a, &b); // a: 000000000061FDEC, b: 000000000061FDE8 (直接assign value)

    ptr_change(&a, &b); // 交換址的值

    printf("a: %p, b: %p\n", &a, &b); // a: 000000000061FDEC, b: 000000000061FDE8

    return 0;
}