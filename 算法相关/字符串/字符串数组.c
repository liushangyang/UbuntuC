#include<stdio.h>

int main(void){
    char *plant[]={"hello","world","Version"};
    char pl2[][8]={"hello","world","Version"};
    return 0;
    //都可以，但很明显，第一个更省空间，其每个元素指向的是一个字符串的地址。
}