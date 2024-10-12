#include<stdio.h>

void quicksort(int num[],int low,int high);
int compare(int num[],int low,int high);

int main(void){
    int n,i;
    printf("How much number you want to input\n");
    scanf("%d",&n);
    int num[n];
    printf("input %d numbers",n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    quicksort(num,0,n-1);
    for(i=0;i<n;i++){
        printf("%d\n",num[i]);
    }
    return 0;
}
void quicksort(int num[],int low,int high){
    int middiem;
    if(low>=high) return;
    middiem=compare(num,low,high);
    quicksort(num,low,middiem-1);  
    quicksort(num,middiem+1,high);
}
int compare(int num[],int low,int high){
    int bridge_number=num[low];
    for(;;){
    
        while(low<high&&num[high]>bridge_number){
        high--;
    }
    if(low>=high) break;
    num[low++]=num[high];
         while(num[low]<bridge_number){
        low++;
    }
    num[high--]=num[low];
    }
    num[high]=bridge_number;
    return high;
}