#include<stdio.h>
#include<stdlib.h>

// 定义快速排序函数
void bridge(int *num,int low ,int high);
// 定义划分函数
int sort(int *num,int low,int high);

int main(void){
    int size;
    int *num;

    // 输入数组长度
    scanf("%d",&size);
    // 为数组动态分配内存
    num=malloc(size*sizeof(int));
    if(num==NULL) { printf("Extend storage fail !!"); exit(0);}

    for(int i=0;i<size;i++){
        // 输入数组元素
        scanf("%d",num+i);
    }

    // 对数组进行快速排序
    bridge(num,0,size-1);

    for(int i=0;i<size;i++){
        // 输出排序后的数组
        printf("%d ",*(num+i));
    }

    return 0;

}

// 快速排序的递归函数
void bridge(int *num,int low ,int high){
    if(low>=high) return ;
    // 获取划分点
    int partition=sort(num,low,high);
    // 对划分点右侧的子数组进行快速排序
    bridge(num,partition+1,high);
    // 对划分点左侧的子数组进行快速排序
    bridge(num,low,partition-1);
}

// 快速排序的划分函数
int sort(int *num,int low,int high){
    int storage=*(num+low);
    

    while (low<high)
    {   
        // 从右向左找到第一个小于基准值的元素
        while (*(num+high)>storage&&low<high)
        {
            high--;
        }

        // 将找到的元素放到基准值的位置，并将基准值的位置右移
        *(num+low++)=*(num+high);
        if(low>=high) break;
        // 从左向右找到第一个大于基准值的元素
        while (*(num+low)<=storage)
        {
            low++;
        }

        // 将找到的元素放到基准值的位置，并将基准值的位置左移
        *(num+high--)=*(num+low);  
        
    }

    // 将基准值放到正确的位置
    *(num+high)=storage;

    return high;
    
}
