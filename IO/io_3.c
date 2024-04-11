#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[10];
    memset(buff, '\0', sizeof(buff)); // 設char內容為'\0'(空字符)
    //   gets(buff);
    fgets(buff, sizeof(buff), stdin);
    // fgets可以防止輸入大小多於buff造成緩衝區溢位
    // fgets最大字符數包括'\0'> 因此實際存的字符數為size-1
    // gets & fgets會讀取'\n'

    // enter 1234 -> 1234\n\0 (最末尾一定要保留'\0')
    // enter 12345678 -> 12345678\n\0
    // enter 123456789 -> 123456789\0 (\n被擠掉了>\n保留在緩衝區內)

    if (buff[strlen(buff) - 1] == '\n')
    { // 如果包含换行符，则将其替换为 null 字符
        buff[strlen(buff) - 1] = '\0';
    }

    printf("\n The buffer entered is [%s]\n", buff);
    return 0;
}