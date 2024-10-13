#include <stdio.h>
int main (void)    
{   
   int a,b,c, max;
   scanf("%d,%d,%d",&a,&b,&c );
   if (a>b)
   { 
     max+a;//你这个max就没有初始化，你+什么？还有加完给谁？ 
   }
   else 
   {
        max=b; 
  }
  if  (a>c)
   {  
   printf("max=%d\n",max); 
   }
   if(max<c)
   { 
     printf( "max=%d\n",c);
   }
    return 0;
}