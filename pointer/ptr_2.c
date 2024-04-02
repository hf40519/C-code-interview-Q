#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {0, 1, 2, 3, 4};

    printf("%d \n", arr[1] == *(arr + 1));     // True
    printf("%d \n", &arr[2] == arr + 2);       // True
    printf("%d \n", (&arr[2] - &arr[0]) == 2); // True (2址-0址 > 偏移量=2) 指针之间的差值计算的是元素的数量，而不是byte的数量
}