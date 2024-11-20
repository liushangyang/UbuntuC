#include<stdio.h>

int main(void){
    char *p;
    p="abc";//将P指向abc字符串的地址
    printf("%s",p);
    char *c;
    c="abc"[1];
    printf("%c",c);//字符串可以使用下标
    return 0;
}