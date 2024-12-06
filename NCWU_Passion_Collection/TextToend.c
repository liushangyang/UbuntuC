#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//现在我们要做一个《古风文字排版》

int main(void){
    int row,heightSize;
    int length;
    char *conlum;
   
    

    scanf("%d",&length);
    conlum=malloc((length+1)*sizeof(char));
    scanf(" %s",conlum);

    scanf("%d",&row);
    heightSize=(length-1)/row+1;//减一加一法

    char cBackUp[heightSize][row];
    memset(cBackUp,' ',sizeof(cBackUp));
    char *head=cBackUp[0];
    int baseLine=0;
    for(int i=row-1;i>=0;i--){
        for(int j=0;j<heightSize;j++){
           if(*(conlum+baseLine)=='\0') break;
                cBackUp[j][i]=*(conlum+baseLine);
                baseLine++;
        }
        if(*(conlum+baseLine)=='\0') break;
    }


    for(int i=0;i<heightSize*row;i++) { printf("%c",*(head+i)); if((i+1)%row==0) printf("\n");}

    return 0;
}