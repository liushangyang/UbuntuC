#include<stdio.h>
//Funvtion Test

double average(double input,int num_input);

int main(void){
    double user_input,storage;
    int num;
    int i=0;
    printf("How many munber your want input\n");
    scanf("%d",&num);
    while (i<num)
    {
        printf("Now input num%d\n",i+1);
        scanf("%lf",&user_input);
        storage+=user_input;
        i++;
    }
    printf("Your average %5.2f",average(storage,num));

    
}

double average(double input,int num_input){
    return input/num_input;
}   