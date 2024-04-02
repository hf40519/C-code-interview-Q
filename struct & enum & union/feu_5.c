#include <stdio.h>

// 定义结构体
struct Student
{
    char name[50];
    int age;
};

int isPowerOfTwo(int num)
{
    // 如果 num 是 0 或负数，不是2的次方
    if (num <= 0)
    {
        return 0;
    }
    // 如果 num 和 num-1 的按位与结果为0，说明只有一个1，是2的次方
    return (num & (num - 1)) == 0;
}
int main()
{
    // 使用 typedef 定义结构体类型别名
    typedef struct Student Student;

    // 使用结构体类型别名创建结构体变量
    Student s1 = {"Alice", 20};
    Student s2 = {"Bob", 22};

    // 访问结构体成员并打印
    printf("Student 1: Name=%s, Age=%d\n", s1.name, s1.age);
    printf("Student 2: Name=%s, Age=%d\n", s2.name, s2.age);

    printf("%d \n", isPowerOfTwo(7));

    return 0;
}