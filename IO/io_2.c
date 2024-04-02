#include <stdio.h>

int main()
{
    // \r > 将光标移动到当前行的起始位置
    // \b > 光标向左移动一个位置
    printf("\new_c_question\by"); // \n ew_c_questioy
    printf("\rgeeksforgeeks");    // geeksforgeeks > 把前次print覆蓋
    return 0;
}