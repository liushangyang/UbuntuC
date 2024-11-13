#include<stdio.h>
#include<stdlib.h>

// certainly rubbish
//





int main(void){
    int n,i,p,q,t;
    int *id;
    printf("How many you want input\n[if you don't konw please input number>1000]\n");
    scanf("%d",&n);
    id=(int *)malloc(n*(int)sizeof(int));
    for(i=0;i<n;i++) id[i]=i;
    while (scanf("%d %d\n",&p,&q)==2)
    {
      if(id[p]==id[q]) continue;
      for(t=id[p],i=0;i<n;i++){
        if(id[i]==t) id[i]=id[q];
      }
      printf(" %d %d\n",p,q);
    }
    
    return 0;
}