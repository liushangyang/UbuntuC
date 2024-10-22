#include<stdio.h>

int main(void){
    FILE *p;
    char ch,filename[30];
    printf("请输入你要打开的文件名称");
    scanf("%s",&filename);
    p=fopen(filename,"a+");
    if(p==NULL) printf("Fuck you");
    getchar();
    while (ch!='#')
    {
        fputc(ch,p);
        putchar(ch);
        ch = getchar( );
    }
    fclose(p);
    fprintf(p,"第10次读取");
    return 0;
    


}