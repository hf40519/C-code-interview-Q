#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
    int i;
    for (i = 0; i < 2; i++)
    {
        fork();
        printf("-"); // 共輸出8個 (額外的2個是第一次for loop printf給fork child)
    }

    wait(NULL);
    wait(NULL);

    return 0;
}