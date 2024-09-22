#include<stdbool.h>
#include<stdio.h>

int main(void){
    
    int  digit_repeat[10]={0};
    int digit_num[10]={0,1,2,3,4,5,6,7,8,9};
    int digit;
    long n;
    int i=0;
    int m=0;
    int t=0;

    for(;;){

    printf("Enter a number: ");
    scanf("%ld",&n);

    if (n==0)
    {
        break;
    }
    

    while (n>0)
    {
        /* code */
        digit=n%10;
     
       
        digit_repeat[digit]++;
        n/=10;
    }
    printf("Digit:      ");
    while (i<10)
    {
        printf("%5d",digit_num[i]);
        i++;
    }
    printf("\n");
    printf("Occurrences:");
    while (m<10)
    {
        printf("%5d",digit_repeat[m]);
        m++;
    }
  
    while (t<10)
    {
        digit_repeat[t]=0;
        t++;
    }
    t=0;
    i=0;
    m=0;
    printf("\n");
    }
  
    
    return 0;
    
}