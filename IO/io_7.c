#include <stdio.h>
#include <unistd.h>

int main()
{
    while (1)
    {
        fprintf(stdout, "hello-std-out");
        // fflush(stdout);
        fprintf(stderr, "hello-std-err");

        // 只會輸出hello-std-err，stdout只有等到缓冲区被填满或者缓冲区被刷新时才显示

        sleep(1);
    }

    // stdout（标准输出）：
    // stdout 是用于标准输出的文件流。
    // 默认情况下，printf 函数和其他输出函数将数据写入到 stdout 中。
    // 当程序正常运行时，标准输出通常被重定向到终端（或命令行窗口），所以输出会显示在终端上。

    // stderr（标准错误输出）：
    // stderr 是用于标准错误输出的文件流。
    // stderr 主要用于输出错误信息、警告和其他一些需要立即注意的消息。
    // 即使标准输出被重定向到文件或管道中，stderr 通常仍然连接到终端，以便及时通知用户错误信息。
    return 0;
}