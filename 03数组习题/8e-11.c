#include<stdio.h>

#define line 8
#define hang 8
int main(void){
    char checker_board [line] [hang]={0};
    int i,j;
    i=0;
    j=0;
    while (i<line)
    {
        /* code */
        while (j<hang)
        {
            /* code */
            if ((i+j)%2==0)
            {
                /* code */
                checker_board[i][j]='B';
            }else{
                checker_board[i][j]='R';
            }
            j++;
            
        }
        j=0;
        i++;
        
    }
    printf("%c\n",checker_board[7][7]);
    return 0;
    
}