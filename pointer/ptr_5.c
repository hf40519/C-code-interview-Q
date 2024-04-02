char *getString()
{
    char *str = "Nice test for strings";
    return str;
}

int main()
{
    // C 語言規格中定義 string literals 會被分配於 “static storage” 當中
    printf("%s", getString()); // "Nice test for strings"
    getchar();
    return 0;
}