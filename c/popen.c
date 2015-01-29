/*************************************************************************
	> File Name: popen.c
	> Author: 
	> Mail: 
	> Created Time: 2015年01月29日 星期四 22时05分04秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	FILE * fp;
	char buffer[80];
	fp=popen("cat /etc/passwd","r");
	fgets(buffer,sizeof(buffer),fp);
	printf("%s",buffer);
	pclose(fp);
}
