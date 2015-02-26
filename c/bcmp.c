/*************************************************************************
	> File Name: bcmp.c
	> Author: 
	> Mail: 
	> Created Time: 2015年02月13日 星期五 10时18分24秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	char *a ="asdasdasd";
	char *b ="asdcsfdg";
	int d = bcmp(a,b,6);

	printf("d=%d\n",d);


	return 0;
}

