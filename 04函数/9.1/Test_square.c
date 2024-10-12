#include<stdio.h>

// Attetion

int main(void){
    double x =3.0;
    printf("Now the result is %d\n",square((int)x));
    return 0;
}

int square(int n){
    return n*n;
}