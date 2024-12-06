#include<stdio.h>
#include<stdlib.h>

void bridge(int *num,int low ,int high);
int sort(int *num,int low,int high);

int main(void){
    int size;
    int *num;

    scanf("%d",&size);
    num=malloc(size*sizeof(int));
    if(num==NULL) { printf("Extend storage fail !!"); exit(0);}

    for(int i=0;i<size;i++){
        scanf("%d",num+i);
    }

    bridge(num,0,size-1);

    for(int i=0;i<size;i++){
        printf("%d",*(num+i));
    }

    return 0;

}

void bridge(int *num,int low ,int high){
    if(low>=high) return ;
    int partition=sort(num,low,high);
    bridge(num,partition+1,high);
    bridge(num,low,partition-1);
}

int sort(int *num,int low,int high){
    int storage=*(num+low);
    

    while (low>=high)
    {   
        while (*(num+high)>storage)
        {
            high--;
        }

        *(num+low++)=*(num+high);

        while (*(num+low)<=storage&&storage>=*(num+high))
        {
            low++;
        }

        *(num+high--)=*(num+low);  
        
    }

    *(num+high)=storage;

    return high;
    
}