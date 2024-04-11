#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str[4] = {"Department", "of", "Information", "Management"};
    printf("str loc: %p\n", str); // 000000000061FE00
    printf("D loc: %p\n", *str);  // 0000000000405000 (如果string的長度都一樣的話str==*str)
    printf("D val: %c\n", **str);
    printf("I loc: %p\n", *(str + 2));
    printf("I val: %c\n", **(str + 2));
    printf("p loc: %p\n", *str + 2);
    printf("p val: %c\n", *(*str + 2));
    printf("g loc: %p\n", *(str + 3) + 4);
    printf("g val: %c\n", *(*(str + 3) + 4));
    printf("----------\n");

    char str2[2][4] = {"123", "456"};
    printf("str loc: %p\n", str2);          // 000000000061FDF8
    printf("123 loc: %p\n", *str2);         // 000000000061FDF8
    printf("123 loc: %p\n", &str2[0]);      // 000000000061FDF8
    printf("1 loc: %p\n", &str2[0][0]);     // 000000000061FDF8
    printf("456 loc: %p\n", str2 + 1);      // 000000000061FDFC
    printf("456 loc: %p\n", &str2[1]);      // 000000000061FDFC
    printf("4 loc: %p\n", *(str2 + 1));     // 000000000061FDFC
    printf("4 loc: %p\n", &str2[1][0]);     // 000000000061FDFC
    printf("5 loc: %p\n", &str2[1][1]);     // 000000000061FDFD
    printf("5 loc: %p\n", *(str2 + 1) + 1); // 000000000061FDFD
    printf("----------\n");

    int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};
    printf("array loc: %p\n", arr);
    printf("10 loc: %p\n", *arr);
    printf("10 val: %d\n", **arr);
    printf("40 loc: %p\n", *(arr + 1));
    printf("40 val: %d\n", **(arr + 1));
    printf("30 loc: %p\n", *arr + 2);
    printf("30 val: %d\n", *(*arr + 2));
    printf("60 loc: %p\n", *(arr + 1) + 2);
    printf("60 val: %d\n", *(*(arr + 1) + 2));
    printf("----------\n");

    double arr_1[2][3] = {{10., 20., 30.}, {40., 50., 60.}};
    printf("array loc: %p\n", arr_1);
    printf("10 loc: %p\n", *arr_1);
    printf("10 val: %lf\n", **arr_1);
    printf("40 loc: %p\n", *(arr_1 + 1));
    printf("40 val: %lf\n", **(arr_1 + 1));
    printf("30 loc: %p\n", *arr_1 + 2);
    printf("30 val: %lf\n", *(*arr_1 + 2));
    printf("60 loc: %p\n", *(arr_1 + 1) + 2);
    printf("60 val: %lf\n", *(*(arr_1 + 1) + 2));
    printf("----------\n");

    return 0;
}