#include<stdio.h>
#include<stdlib.h>

/*
    SystemType : Ubuntu 24.04
    gcc version 13.2.0 
*/

typedef struct PresidentID *link;
//定义结构体 总统ID
struct PresidentID
{
    int ID;
    link next;
}; 

//定义链表扩展函数
link sheetExtend(link head){
    link x,y;

    x=malloc(sizeof(struct PresidentID));
    if(x==NULL){
         printf("Error! Memory allocation fail!\n"); 
         return NULL;
    }   
    y=head->next;
    head->next=x;
    x->next=y;

    return x;
}

//节点删除函数
void deleteNext(link head,link TargetNode){
     link temp;

   while (head->next!=TargetNode)
   {
        head=head->next;
   }
   
   temp=TargetNode->next;
   head->next=temp;
   free(TargetNode);
}

//约瑟夫函数
link josephFunction(link head,int interval){
   link deleteTarget=head;
   link temp;

   while (head->next!=head)
   {
        for(int i=1;i<interval;i++){
            deleteTarget=deleteTarget->next;
        }

        //将Target移动到下一个节点
        temp=deleteTarget->next;
        deleteNext(head,deleteTarget);
        deleteTarget=temp;
   }
   
   return deleteTarget;
   
}

int main(void){
    int PresidentNumber,interval;
    link head,end;//定义头尾节点
    link bridge,result;
    int i;

    head=malloc(sizeof(struct PresidentID));
    if(head==NULL) {printf("Error! Memory allocation fail!\n"); return 1;}
    else head->next=head;

    printf("How many presidents?\n");
    scanf("%d",&PresidentNumber);

    //输入ID
    printf("Now input the ID of President\n");
    bridge=head;
    i=0;
    do{
        scanf("%d",&bridge->ID);
        if(i!=PresidentNumber){
        end=sheetExtend(bridge);
        bridge=end;
        }
        i++;
    }while(i<PresidentNumber);

    //得到间隔数
    printf("Now input the interval\n");
    scanf("%d",&interval);

    //调用约瑟夫函数
    result=josephFunction(head,interval);

    printf("Finally,the Prsident is %d",result->ID);

    return 0;


}