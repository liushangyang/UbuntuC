#include<stdio.h>
#define hang 3
#define line 4

int main(void){
    int num[hang][line]={{2,3,4,5},{3,4,6,7},{2,3,6,7}};
    int (*p)[4];
    p=num;
    int x,y;
    printf("Which line you want [x][y]");
    scanf("%d%d",&x,&y);
    printf("%d",*(*(p+x-1)+(y-1)));
    return 0;

}