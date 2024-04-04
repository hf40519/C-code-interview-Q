#include <stdio.h>
#include <string.h>

// 定義結構體
struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    // 創建結構體陣列
    struct Student students[3];

    // 初始化陣列中的每個學生
    strcpy(students[0].name, "John"); // 不能使用students[0].name = "John"; 在 C 語言中，直接將字符串賦值給字符陣列是不允許的
    students[0].age = 20;
    students[0].marks = 85.5;

    strcpy(students[1].name, "Alice");
    students[1].age = 21;
    students[1].marks = 78.0;

    strcpy(students[2].name, "Bob");
    students[2].age = 19;
    students[2].marks = 92.3;

    // 遍歷結構體陣列並打印每個學生的信息
    printf("Student Information:\n");
    for (int i = 0; i < 3; i++)
        printf("Name: %s, Age: %d, Marks: %.2f\n", students[i].name, students[i].age, students[i].marks);

    return 0;
}