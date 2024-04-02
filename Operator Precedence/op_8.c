#include <stdio.h>

int main()
{
    int x;
    x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20
                                : 30;
    // Operator precedence: ?: < != < <, >
    // (>, <) 0 ? 10 : 1 != 1 ? 20: 30
    // (!=)   0 ? 10: 0 ? 20: 30
    // (?: 關聯性右至左) 0 ? 10: 30
    // final: 30
    printf("Value of x:%d \n", x); // 30

    int y;
    y = 2 > 5 != 1 ? 5 < 8 && 8 > 2 ? !5 ? 10 : 20 : 30 : 40;
    // Operator precedence: ?: < && < != < <, > < !
    // (!) 2 > 5 != 1 ? 5 < 8 && 8 > 2 ? 0 ? 10: 20: 30: 40
    // (>, <) 0 != 1 ? 1 && 1 ? 0 ? 10: 20: 30: 40
    // (!=) 1 ? 1 && 1 ? 0 ? 10: 20: 30: 40
    // (&&) 1? 1 ? 0 ? 10: 20: 30: 40
    // (?: 關聯性右至左) 1 ? 1 ? 20: 30: 40
    // (?: 關聯性右至左) 1 ? 20: 40
    // final: 20
    printf("Value of y:%d", y); // 20

    return 0;
}