/*************************************************************************
	> File Name: readdir.c
	> Author: 
	> Mail: 
	> Created Time: 2015年02月13日 星期五 15时32分47秒
 ************************************************************************/

#include<stdio.h>
#include<dirent.h>

int main(int argc, char *argv[])
{
	DIR *dir;
	struct dirent *ptr;
	int i;
	dir = opendir("/etc/rc.d");
	while((ptr=readdir(dir))!=NULL)
	{
		printf("d_name:%s\n",ptr->d_name);
	}
	closedir(dir);
	return 0;
}
