/*************************************************************************
	> File Name: alarm.c
	> Author: 
	> Mail: 
	> Created Time: 2015年01月29日 星期四 19时42分09秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void handler(){
	printf("hello\n");
}

int
main()
{
	int i;
	signal(SIGALRM,handler);
	alarm(5);
	for(i=1;i<7;i++){
		printf("sleep %d ...\n",i);
		sleep(1);
	}
	return 0;
}

