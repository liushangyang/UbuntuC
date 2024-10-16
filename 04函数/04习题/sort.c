#include<stdio.h>

int whoismax(int num[],int low,int high){
    int bridege=num[low];
    int max;
    
    for(;;){
        if(low>=high) break;//取得最大值
        if(bridege>=num[low]){
            low++;
        }else{
            bridege=num[low];
            max=low;
            low++;
        }
    }
    return max;
}

void sort(int num[],int low,int high){
    if(low>=high) return;
    int max=whoismax(num,low,high);
    int num_sawp=num[high];
    num[high]=num[max];
    num[max]=num_sawp;
    sort(num,low,high-1);
}

int main(void){
    int n,i;
    printf("请输入数字数量\n");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    sort(num,0,n-1);
   for(i=0;i<n;i++){
    printf("%d ",num[i]);
   }
   return 0;

}

