#include <stdio.h>

int main()
{
    char *str[] = {
        "MediaTekOnlineTesting",
        "WelcomeToHere",
        "Hello",
        "EverydayGenius",
        "HopeEverythingGood"};

    char *m = str[4] + 4;
    char *n = str[1];
    char *p = *(str + 2) + 4;
    printf("1. %s\n", *(str + 1));   // MediaTekOnlineTesting
    printf("2. %s\n", (str[3] + 8)); // Genius
    printf("3. %c\n", *m);           // E
    printf("4. %c\n", *(n + 3));     // c
    printf("5. %c\n", *p + 1);       // p > (o+1=p [ASCII])

    char a = 'a';
    printf("%c", a + 1); // a+1=b

    // C語言 'A' 用於宣告char; "ABC" 用於宣告string (結尾符為 '\O')


    // 1. int p 一個整型數（An integer）
    // 2. int *p 一個指向整型數的指標（A pointer to an integer）
    // 3. int **p 一個指向指標的的指標，它指向的指標是指向一個整型數（A pointer to a pointer to an integer）
    // 4. int p[10] 一個有10個整型數的陣列（An array of 10 integers）
    // 5. int *p[10] 一個有10個指標的陣列，該指標是指向一個整型數的（An array of 10 pointers to integers）
    // 6. int (*p)[10] 一個指向有10個整型數陣列的指標（A pointer to an array of 10 integers）
    // 7. int (*p)(int) 一個指向函數的指標，該函數有一個整型參數並返回一個整型數（A pointer to a function that takes an integer as an argument and returns an integer）
    // 8. int (*p[10])(int) 一個有10個指標的陣列，該指標指向一個函數，該函數有一個整型參數並返回一個整型數（ An array of ten pointers to functions that take an integer argument and return an integer）

    return 0;
}