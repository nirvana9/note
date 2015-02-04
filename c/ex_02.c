/*************************************************************************
	> File Name: ex_02.c
	> Author: 
	> Mail: 
	> Created Time: 2015年02月04日 星期三 18时14分26秒
 ************************************************************************/

#include<stdio.h>
#include<hiredis/hiredis.h>

redisContext * _connect()
{
//	redisContext *conn =redisConnect("127.0.0.1",50001);
	redisContext *conn =redisConnect("127.0.0.1",50001);
	if (conn->err)
	{
		printf("connection error:%d\n",conn->err);
		return NULL;
	}
	return conn;
}

int main()
{
	redisContext *conn=NULL;
	conn =redisConnect("127.0.0.1",50001);
	if (conn == NULL)
	{
		printf("connection error:\n");
		return -1;
	}
	redisReply *reply = redisCommand(conn, "set key value");
	freeReplyObject(reply);
	redisFree(conn);
	return 0;
}
