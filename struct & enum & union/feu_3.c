#include <stdio.h>
#include <string.h>

// 结构体示例
struct Person
{
    char name_1[50];
    char *name_2;
    int age;
};

// 联合示例
union Data
{
    int i;
    float f;
};

int main()
{
    // 使用结构体
    struct Person person;
    strcpy(person.name_1, "John");
    person.name_2 = "John";
    person.age = 30;
    printf("Name 1: %s, Age: %d\n", person.name_1, person.age);
    printf("Name 2: %s, Age: %d\n", person.name_2, person.age);

    // 使用联合
    union Data data;
    data.i = 10;
    printf("Integer value: %d\n", data.i);
    printf("Float value: %f\n", data.f);
    data.f = 3.14;
    printf("Integer value: %d\n", data.i);
    printf("Float value: %f\n", data.f);

    return 0;
}