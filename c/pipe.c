/*************************************************************************
	> File Name: pipe.c
	> Author: 
	> Mail: 
	> Created Time: 2015年01月29日 星期四 21时55分40秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>

int main()
{
	int filedes[2];
	char buffer[80];
	pipe(filedes);
	if(fork()>0)
	{
		char s[] ="hello!\n";
		write(filedes[1],s,sizeof(s));
	}
	else
	{
		read(filedes[0],buffer,80);
		printf("%s",buffer);
	}
	return 0;
}
