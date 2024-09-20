#include<stdio.h>
//数组的斐波那契数列
//刘阳阳-2024.9.20
int main(void){
    int NumGroup[40]={0,1};
    int i,m=0;
    for ( i = 2; i < (int)sizeof(NumGroup)/sizeof(NumGroup[0]); i++)
    {
        NumGroup[i]=NumGroup[i-1]+NumGroup[i-2];
    }
    for ( i = 0; i < 4; i++)
    {
        /* code */
        int n =0;
        ;
        while (n<10)
        {
            /* code */
            printf("%d ",NumGroup[m]);
            n++;
            m++;
        }
        printf("\n");
       
    }
    
    return 0;
    
}