#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#define LINE 8
#define SLIM 8
//编写外应卦处理函数
int outpreview(int out){
	int out;
	int rez;
	rez=out%8;
	return rez;

}


int main(void){
	bool in_mind [LINE] [SLIM]={false};
	int year,month,day;
	int num_up,num_down;
	srand((unsigned)time(NULL));
	char upgua [LINE]={'Q','D','L','Z','X','K','G','k'};
	char downgua [SLIM]={'Q','D','L','Z','X','K','G','k'};
	printf("欢迎来到天命求测系统：\n请阅读对照表：乾卦[Q] 兑卦[D] 离卦[L] 震卦[Z] 巽卦[X] 坎卦[K] 艮卦[G] 坤卦[k]\n请默念心中所求测之事；并输入出生日期。格式：YYYY/MM/DD\n");
	scanf("%4d/%2d/%2d",&year,&month,&day);
	num_up=(year+month+day)%LINE;
	num_down=(year+month+day+rand())%SLIM;
	printf("你的挂是：%c%c\n",upgua[num_up],downgua[num_down]);
	printf("n
	return 0;
}

