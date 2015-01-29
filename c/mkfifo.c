/*************************************************************************
	> File Name: mkfifo.c
	> Author: 
	> Mail: 
	> Created Time: 2015年01月29日 星期四 20时15分34秒
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
	char buffer[80];
	int fd;
	unlink("zieckey_fifo");
	mkfifo("zieckey_fifo",0666);
	if(fork()>0)
	{
		char s[] = "hello!\n";
		fd = open("zieckey_fifo",O_WRONLY);
		write(fd,s,sizeof(s));
		close(fd);
	}
	else
	{
//		fd=open("zieckey_fifo",O_RDONLY);
//		read(fd,buffer,80);
//		printf("%s",buffer);
//		close(fd);

	}
	return 0;
}
