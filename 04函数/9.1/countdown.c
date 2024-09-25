#include<stdio.h>

void countdown(int n){
    printf("Counrdown %2d \n",n);
}
int main(void){
    for(int i=10;i>0;i--){
        countdown(i);
    }
    return 0;
}