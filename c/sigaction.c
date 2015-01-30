/*************************************************************************
	> File Name: sigaction.c
	> Author: 
	> Mail: 
	> Created Time: 2015年01月29日 星期四 22时24分45秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void show_handler(struct sigaction * act)
{
	switch(act->sa_flags)
	{
		case SIG_DFL: printf("Default action\n"); break;
		case SIG_IGN: printf("Ignore the signal\n"); break;
		default: printf("0x%x\n",act->sa_handler);
	}
}

int main()
{
	int i;
	struct sigaction act, oldact;
	act.sa_handler = show_handler;
	act.sa_flag = SA_ONESHOT|SA_NOMASK;
	sigaction(SIGUSER1,&act,&oldact);
	for(i=5,i<15;i++)
	{
		printf("sa_handler of signal %2d =",i);
		sigaction(i,NULL,&oldact);
	}
	return 0;
}
