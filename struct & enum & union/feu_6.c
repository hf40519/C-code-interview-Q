#include <stdio.h>

// 定義結構體
struct Point
{
    int x;
    int y;
};

// 函數接受結構體的指針作為參數
void printPoint_ptr(struct Point *p)
{
    printf("x = %d, y = %d\n", p->x, p->y);
}

// 函數接受結構體的指針作為參數，但使用*pointer存取元素
void printPoint_pptr(struct Point *p)
{
    printf("x = %d, y = %d\n", (*p).x, (*p).y);
}

// 函數接受結構體的副本作為參數
void printPoint_cp(struct Point p)
{
    printf("x = %d, y = %d\n", p.x, p.y);
}

int main()
{
    // 創建結構體變量
    struct Point pt = {3, 5};
    struct Point *ptr = &pt;

    // 將結構體指針傳遞給函數
    printPoint_ptr(&pt);
    // 將結構體指針傳遞給函數
    printPoint_pptr(ptr);
    // 將結構體傳遞給函數
    printPoint_cp(pt);

    return 0;
}