#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct site
    {
        int no_of_pages;
    };

    struct site a;
    //   struct site a = {100};
    struct site *ptr = &a;

    a.no_of_pages = 200;

    printf("%d \n", ptr->no_of_pages); // 200

    ptr->no_of_pages = 300;

    printf("%d \n", a.no_of_pages); // 300

    return 0;
}
