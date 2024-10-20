#include<stdio.h>
#define stu 4
#define sub 7

int avarage(int *stdub,int n){
      int  *P_end=stdub+(n-1);
      int sum;
      for(;stdub<P_end;stdub++){
        sum +=*stdub;
            
      }
      printf("sum=%d",sum/n);                                                       
}

int main(void){
    
}