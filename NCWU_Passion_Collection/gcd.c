#include<stdio.h>


int gcd(int num1,int num2){
    if(num2==0) return num1;

    return gcd(num2,num1%num2);
}

int lcm(int num1,int num2){
    return num1*num2/gcd(num1,num2);//二者关系式
}

int main(void){
    int num1,num2;

    scanf("%d%d",&num1,&num2);

    printf("%d",gcd(num1,num2));
    printf(" %d",lcm(num1,num2));

    return 0;
}