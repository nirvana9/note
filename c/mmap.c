/*************************************************************************
	> File Name: mmap.c
	> Author: 
	> Mail: 
	> Created Time: 2015年02月03日 星期二 14时37分47秒
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/mman.h>

int main()
{
	int fd;
	void *start;
	struct stat sb;
	fd=open("/etc/passwd",O_RDONLY);
	fstat(fd,&sb);
	start=mmap(NULL,sb.st_size,PROT_READ,MAP_PRIVATE,fd,0);

	if(start == MAP_FAILED)
		return;
	printf("%s\n",(char*)start);
	munmap(start,sb.st_size);
	close(fd);
}
