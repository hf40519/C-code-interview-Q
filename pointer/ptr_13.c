#include <stdio.h>
#include <string.h>

void rev_string(char *str)
{
    int i = 0, j = strlen(str) - 1;

    // reverse
    while (i < j)
    {
        // pointer ver.
        char tmp = *(str + i);
        *(str + i) = *(str + j);
        *(str + j) = tmp;
        // indexing ver.
        // char tmp = str[i];
        // str[i] = str[j];
        // str[j] = tmp;

        i++;
        j--;
    }
}

int main()
{
    char str[] = "hello world";
    rev_string(str);
    printf("%s\n", str);
    return 0;
}