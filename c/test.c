/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: 2015年02月04日 星期三 18时48分26秒
 ************************************************************************/

#include<stdio.h>
#include<hiredis/hiredis.h>

int main()
{
	redisContext *conn = redisConnect("127.0.0.1", 50001); //redis server默认端口
	return 0;
}
