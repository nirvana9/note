/*************************************************************************
	> File Name: strstr.c
	> Author: 
	> Mail: 
	> Created Time: 2015年02月13日 星期五 10时26分53秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	char *s="01234567890123456789";

	char *p;

	p = strstr(s,"9i01");
	
	if(p!=NULL)
	{
		printf("%s\n",p);
	}
	return 0;
}
