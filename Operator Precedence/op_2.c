#include <stdio.h>

int main()
{
    char str[] = "geeks\nforgeeks";
    char *ptr1, *ptr2;

    ptr1 = &str[3];                             // k
    ptr2 = str + 5;                             // \n
    printf("%c", ++*str - --*ptr1 + *ptr2 + 2); // str: g+1=h, ptr1: k-1=j, ptr2=\n
    // = printf("%c", 'h' - 'j' + '\n' + 2);
    // 0 - 2 + '\n' + 2 = '\n'
    printf("%s", str);
    // >> heejs
    // >> forgeeks

    return 0;
}
