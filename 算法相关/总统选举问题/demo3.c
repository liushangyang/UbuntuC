#include<stdio.h>
#include<string.h>

int main(void){
    int length,n,height;
    char matrix[1001];
    scanf("%d",&n);
    gets(matrix);

    length=strlen(matrix);
    height=length%n?length/n+1 : length/n;

    char _martix[height][n]={' '};
    int base=0;
    int times=n;
    int leve=0;
    for(int i=0;i<length+1;i++){
        if(leve==height-1) break;
        if(times==0) { times=n; leve++; base=leve;}

        _martix[leve][times-1]=matrix[base];
        base+=4;
        times--;
        
        
    
    }
    return 0;
    
}