#include <stdio.h>

#define DEBUG 1

int main()
{
#if DEBUG
    printf("Debug mode is enabled\n"); // 被编译
#else
    printf("Debug mode is disabled\n"); // 不會被編譯
#endif
    return 0;
}