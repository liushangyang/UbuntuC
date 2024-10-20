#include<stdio.h>

void changeNum(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main(void){
    int a=0,b=1;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    changeNum(p1,p2);
    printf("%d%d",a,b);
    return 0;
}