/*SunCanHlpeU*/
#include<stdio.h>
#include<stdbool.h>

int main(void){
    bool weather=true;
    int user_input;
    
    printf("Please input a num ");
    scanf("%d",&user_input);
    
    if(user_input<=1)
        weather=false;
    for(int i=2;i<user_input;i++){
        if (user_input%i==0)
        {
            weather=false;
        }
        
    }

    printf("\n");
    
    if (weather==true)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;

}