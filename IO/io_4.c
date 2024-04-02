#include <stdio.h>

char *fun()
{
    return "awake";
}
int main()
{
    printf("%s", fun() + printf("I see you"));

    // 先print後面的I see you 回傳print的字節數量9
    // 前面的print> printf("%s", "awake" + 9);
    // a w a k e \0 I " " s e e " " y o u \0
    // 0 1 2 3 4  5 6  7  8 9
    // final: I see youee you

    // 在某些系统上，内存中紧接在字符串 "awake" 之后的内存内容可能是 "I see you"，
    // 因此 printf 函数会继续打印 "ee you"。但是，这种行为是不可移植的，
    // 可能会因系统的不同而产生不同的结果。

    return 0;
}