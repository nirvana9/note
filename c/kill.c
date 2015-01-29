/*************************************************************************
	> File Name: kill.c
	> Author: 
	> Mail: 
	> Created Time: 2015年01月29日 星期四 19时51分34秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
	pid_t pid;
	int status;
	if(!(pid=fork()))
	{
		printf("Hi I am child process!\n");
		sleep(10);
		return 0 ;
	}
	else
	{
		printf("send signal to child process (%d)\n",pid);
		sleep(1);
		kill(pid,SIGABRT);
		wait(&status);
		if(WIFSIGNALED(status))
		{
			printf("chile process receive signal %d\n",WTERMSIG(status));
		}
	}
	return 0;
}
