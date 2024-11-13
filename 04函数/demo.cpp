/* 测试程序仅为示例，实际的测试程序可能不同 */
#include <stdio.h>
#include <string.h>
#define MAXLENGTH 100
int isPalindrome(const char* str, char* pch);
int main(){
    char str[MAXLENGTH],mid;
    scanf("%s",str);
    if(isPalindrome(str, &mid))
        printf("是回文！中间字符是%c\n",mid);
    else
        printf("不是回文！中间字符是%c\n",mid);
    return 0;
}

/* 你编写的函数代码将被嵌在这里 */
int isPalindrome(const char* str, char* pch){
    int length=strlen(str);
    char num[length/2+1];
    memcpy(num,str,length/2);
    for(int i=0;i<length/2;i++){
        if(num[i]!=str[length-1-i]){
         return 0;
        }
    }
    if(length%2==0) *pch=str[length/2];
    else *pch=str[length/2+1];
    return 1;
}