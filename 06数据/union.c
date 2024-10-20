#include <stdio.h>

// 定义一个名为 Data 的 union，它可以存储整数、浮点数或字符数组
// union指的是同位体，可以在同一内存单元储存不同的数据
union Data {
    int i;
    float f;
    char str[20];
};

// 定义一个名为 Student 的结构体，包含一个 Data 类型的成员
struct Student {
    char name[50];
    union Data data; // 使用上面定义的 union
};

int main() {
    // 创建一个 Student 类型的变量
    struct Student student;

    // 使用 union 的不同成员
    student.data.i = 10; // 存储一个整数
    printf("Integer: %d\n", student.data.i);

    // 注意：在存储新的值之前，应该将 union 的内容清零或重新初始化，以避免数据残留
    student.data.f = 220.5; // 存储一个浮点数
    printf("Float: %.1f\n", student.data.f);

    // 再次清零或重新初始化
    strcpy(student.data.str, "Moonshot AI"); // 存储一个字符串
    printf("String: %s\n", student.data.str);

    return 0;
}