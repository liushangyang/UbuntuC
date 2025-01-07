#include<stdio.h>

/* 
 * 计算两个数的最大公约数(GCD)
 * 使用欧几里得算法
 */
int gcd(int num1,int num2){
    // 基本情况：当num2为0时，num1就是GCD
    if(num2==0) return num1;

    // 递归情况：继续计算num2和num1除以num2的余数
    return gcd(num2,num1%num2);
}

/*
 * 计算两个数的最小公倍数(LCM)
 * 使用公式：LCM(a,b) = (a*b)/GCD(a,b)
 */
int lcm(int num1,int num2){
    return num1*num2/gcd(num1,num2);//二者关系式
}

/* 
 * 主函数：
 * - 输入两个整数
 * - 输出它们的GCD和LCM
 */
int main(void){
    int num1,num2;

    scanf("%d%d",&num1,&num2);

    printf("%d",gcd(num1,num2));
    printf(" %d",lcm(num1,num2));

    return 0;
}
