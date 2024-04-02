#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str[4] = {"Department", "of", "Information", "Management"};
    printf("D址: %p\n", *str);
    printf("D值: %c\n", **str);
    printf("I址: %p\n", *(str + 2));
    printf("I值: %c\n", **(str + 2));
    printf("p址: %p\n", *str + 2);
    printf("p值: %c\n", *(*str + 2));
    printf("g址: %p\n", *(str + 3) + 4);
    printf("g值: %c\n", *(*(str + 3) + 4));
    printf("str址: %p\n", str);

    int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};
    printf("10址: %p\n", *arr);
    printf("10值: %d\n", **arr);
    printf("40址: %p\n", *(arr + 1));
    printf("40值: %d\n", **(arr + 1));
    printf("30址: %p\n", *arr + 2);
    printf("30值: %d\n", *(*arr + 2));
    printf("60址: %p\n", *(arr + 1) + 2);
    printf("60值: %d\n", *(*(arr + 1) + 2));

    double arr_1[2][3] = {{10., 20., 30.}, {40., 50., 60.}};
    printf("10址: %p\n", *arr_1);
    printf("array址: %p\n", arr_1);
    printf("10值: %lf\n", **arr_1);
    printf("40址: %p\n", *(arr_1 + 1));
    printf("40值: %lf\n", **(arr_1 + 1));
    printf("30址: %p\n", *arr_1 + 2);
    printf("30值: %lf\n", *(*arr_1 + 2));
    printf("60址: %p\n", *(arr_1 + 1) + 2);
    printf("60值: %lf\n", *(*(arr_1 + 1) + 2));

    return 0;
}