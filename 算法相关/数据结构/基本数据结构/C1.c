#include<stdio.h>
#include<stdlib.h>

typedef struct number *link;
struct  number
{
    int *temp;
    link next; 
}ahead;

//定义函数操作链表

void link_num(link orgin_link){
    static int num=0;
    link x=malloc(sizeof(link));
    x->temp=num;

    x->next=NULL;
    orgin_link->next=x;
    x=NULL;
    num++;
}

int mina(void){
    printf("Now input \n");
    scanf("%d",&ahead.temp);
    link_num(&ahead);
    return 0;

}