#include <stdio.h>

// 为 int 类型定义新名称 uint
typedef int uint;

// 为结构体定义新名称 Point
typedef struct {
    int x;
    int y;
} Point;

int main() {
    uint number = 10; // 使用新定义的类型 uint
    Point p = {1, 2}; // 使用新定义的类型 Point

    printf("Number: %d\n", number);
    printf("Point coordinates: (%d, %d)\n", p.x, p.y);

    return 0;
}