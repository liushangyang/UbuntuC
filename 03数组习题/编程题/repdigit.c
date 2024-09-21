#include<stdbool.h>
#include<stdio.h>

int main(void){
    bool digit_seen[10]={false};
    bool digit_repeat[10]={false};
    int digit;
    long n;
    int i=0;
    int m=0;

    printf("Enter a number: ");
    scanf("%ld",&n);

    while (n>0)
    {
        /* code */
        digit=n%10;
        if(digit_seen[digit])
           digit_repeat[digit]=true;
        digit_seen[digit]=true;
        n/=10;
    }
  while (i<10)
  {
    /* code */
    if (digit_repeat[i])
    {
        /* code */
        printf("%d\n",i);
    }else{
        m++;
       
    }
    i++;

  }
  if (m==10)
  {
      /* code */
      printf("NONE");
  }
  
    
    return 0;
    
}