#include<stdio.h>
#define typerof(x) _Generic((x),\
                            int : "int",\
                            double : "double",\
                            default : "Fuck"\
                            )
int main(void){
    int a;
    scanf("%d",&a);
    printf("%s",typerof(a));
    return 0;
}