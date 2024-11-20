#include<stdio.h>

int main(void){
    char *p="NCWU";
    //p[0]='q'; 不可以这样
    printf("%s",p);
    puts(p);//结尾会换行
    //scanf读取到空格截至
    //gets读取到换行符
    return 0;
}