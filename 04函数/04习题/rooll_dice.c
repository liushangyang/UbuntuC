#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<unistd.h>

int roll_dice(void){
    int dice1,dice2;
    srand((int)time(NULL));
    dice1=rand()%6+1;
    dice2=rand()%6+1;
    return dice1+dice2;

} 

bool play_game(int dice,int dice1,int _tim){
    int point=dice;
    printf("You Rolled%d\n",dice);
    
    switch(dice){
        case 7 : if(_tim!=0) return false;
                else return true; 
        case 11 : return true;
        break;
        case 2 : case 3 : case 12 : 
        if(_tim!=0) goto  A1;
        return false;
        default : 
        A1:
        sleep(rand()%5);
        if(point==dice1) return  true;
        if(dice==7&&_tim!=0) return false;
        play_game(roll_dice(),point,++_tim);
        break;
                
    }
}

int main(void){
    int win=0,fail=0;
    char still_play;
    bool isWin;
    for(;;){
    printf("Still Play?\n");
    
    scanf("%c",&still_play);
    getchar();
    if(still_play=='N') break;
    isWin=play_game(roll_dice(),-1,0);
    if(isWin) {
        printf("You win\n");
        win++;
    }
    else{ 
        printf("You falil\n");
        fail++;

    }
    }
    printf("win=%d\nfail=%d\n",win,fail);
    return 0;
}