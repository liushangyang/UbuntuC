#include <stdio.h>

// 使用 enum 关键字定义一个枚举类型，枚举的名称是 Weekday
// 枚举类型是一种用户定义的类型，它为一组整型常量定义了有意义的名称
enum Weekday {
    Sunday,    // 枚举成员 Sunday，代表一周的第一天，默认值为0
    Monday,    // 枚举成员 Monday，代表一周的第二天，默认值为1
    Tuesday,   // 枚举成员 Tuesday，代表一周的第三天，默认值为2
    Wednesday, // 枚举成员 Wednesday，代表一周的第四天，默认值为3
    Thursday,  // 枚举成员 Thursday，代表一周的第五天，默认值为4
    Friday,    // 枚举成员 Friday，代表一周的第六天，默认值为5
    Saturday   // 枚举成员 Saturday，代表一周的第七天，默认值为6
};

int main() {
    // 声明一个枚举类型的变量 today，其类型为 Weekday
    enum Weekday today;

    // 给变量 today 赋值为 Tuesday，即赋值为 2
    today = Tuesday;

    // 使用 printf 函数打印 today 的值和对应的星期名称
    // 这里使用条件运算符 ?: 来决定打印 "Tuesday" 还是 "Other day"
    printf("Today is %d - %s\n", today, today == Tuesday ? "Tuesday" : "Other day");

    // 使用 for 循环遍历枚举类型的所有成员
    // 循环变量 day 被声明为枚举类型 Weekday
    for (enum Weekday day = Sunday; day <= Saturday; day++) {
        // 在循环体内，打印 day 的值和名称
        // 同样使用条件运算符来决定打印 "Tuesday" 还是 "Other day"
        printf("%d: %s\n", day, day == Tuesday ? "Tuesday" : "Other day");
    }

    return 0;
}