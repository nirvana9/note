/*************************************************************************
	> File Name: perror.c
	> Author: 
	> Mail: 
	> Created Time: 2015年01月29日 星期四 21时53分33秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("a","r+");
	if(fp == NULL) perror("fopen");
	return 0;
}
