#include<stdio.h>
#include<stdlib.h>
// 包含 malloc 原型：void*malloc(unsigned int size) 
// calloc 原型：void * calloc(unsigned n,unsigned size) n个size（字节)
// realloc 重新分配 原型：void * realloc(void *c,unsigned int size)
// free 释放 原型：void free(void*p) eg. free(p)释放P占用的空间 realloc(p,50)将所占的空间改为50字节