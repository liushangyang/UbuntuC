#include<stdio.h>

//快速排序算法

#define LENGTH 10

void qsort(int sort[LENGTH]);
void qsortV2(int v2[LENGTH]);


int main(void){
    int num[LENGTH];
    printf("Now input num\n");
    for(int i=0;i<10;i++){
        printf("The %4d\n",i+1);
        scanf("%d",&num[i]);

    }
    qsort(num);
    return 0;
}

void qsort(int sort[LENGTH]){
    int min,max;
    min=sort[0];
    for(int i=1;i<LENGTH;i++){
        if(min>=sort[i]){
            min=sort[i];
        }
    }
    max=sort[0];
    for(int n=1;n<LENGTH;n++){
        if(max<=sort[n]){
            max=sort[n];
        }
    }
   // printf("min=%d,max=%d",min,max); 测试语句
   //排序算法
   
}

void qsortV2(int v2[LENGTH]){
    int sec_sort;
    sec_sort=v2[0];
    v2[0]=0;
    for(int i=i;;i++){
        if ()
        {
            /* code */
        }
        
    }
}