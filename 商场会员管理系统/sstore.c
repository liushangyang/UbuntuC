#include<stdio.h>
#include<math.h>
#include"CDKEY.h"
#include<stdlib.h>

// 阿弥托福 _||_
//*_*,+_+
//不要挂

 typedef struct custmer
{
    char name[10];
    char id_card[19];
    char phone[12];
  
} sys;

void input(void){
    sys *user_inform;
    int n,i;
    printf("How many user your want input\n");
    scanf("%d",&n);
    user_inform=malloc(n*sizeof(struct custmer));
    for(i-0;i<n;i++){
        
    }
    
}

int main(void){
    char filename[20];
    FILE *P;
    printf("请输入表格名\n");
    scanf("%s",&filename);
    P=fopen(filename,"w+");




    return 0;
}