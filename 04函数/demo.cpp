#include<stdio.h>
#include<stdbool.h>

bool is_true(int num[],int k,int n);

int main(void){
    int T,n,k;
    int i=0;
    scanf("%d",&T);
   
    for(int m=0;m<T;m++){
        i=0;
        bool secue=false;
        scanf("%d %d",&n,&k);
        int num[n];

            while (i<n)
        {
            scanf("%d",&num[i]);
            
            i++;
        }
        secue=is_true(num,k,n);
        if(secue==false) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
    
}

bool is_true(int num[],int k,int n){
    int bridge=n;
    bool a1=false;
    if(n<k) return true;
    if(n==1&&k==1) return false;
    while (n>0)
    {   
        int a2=n-2;
        while ((a2)>=0)
        {
            if (num[n-1]==a2) a1=true;
            a2--;
        }
        if(a1==true) return a1;
        n--;
        
    }
    n=bridge-1;
    for(;k>=1;k--){
        a1=false;
        while (n>=0)
        {
           if(k==num[n]) a1 = true;
           n--;
        }
        if(a1==false) return true;
        
    }
    return false;
    
    
}