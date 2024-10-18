#include<stdio.h>

int square(int x,int n );


int square(int x,int n)
{
    int i,sum;
    sum=x;
    for(i=1;i<n;i++){
        sum*=x;
    }
    return sum;
}

int main(void){
    int x,sum[5];
    printf("intput x\n");
    scanf("%d",&x);
    sum[0]=square(x,5);
    sum[1]=square(x,4);
    sum[2]=square(x,3);
    sum[3]=square(x,2);
    sum[4]=square(x,1);
    printf("%d\n",3*sum[0]+2*sum[1]-5*sum[2]-sum[3]+7*sum[4]-6);
    return 0;
}