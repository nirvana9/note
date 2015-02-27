#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <hiredis/hiredis.h>

int main(int argc, char **argv) {
    unsigned int j;
    redisContext *c;
    redisReply *reply;
    const char *hostname = (argc > 1) ? argv[1] : "127.0.0.1";
    int port = (argc > 2) ? atoi(argv[2]) : 6379;

    struct timeval timeout = { 1, 500000 }; // 1.5 seconds
    c = redisConnectWithTimeout(hostname, port, timeout);
    if (c == NULL || c->err) {
        if (c) {
            printf("Connection error: %s\n", c->errstr);
            redisFree(c);
        } else {
            printf("Connection error: can't allocate redis context\n");
        }
        exit(1);
    }
    reply = redisCommand(c,"LLEN mylist");
	printf("INCR counter: %lld\n", reply->integer);
    freeReplyObject(reply);
	
//    for (j = 0; j < 10; j++) {
//        char buf[64];
//        snprintf(buf,64,"%d",j);
        reply = redisCommand(c,"RPOP mylist");
		printf("----%s\n",reply->str);
		printf("I: %lld\n", reply->integer);
        freeReplyObject(reply);
//    }
    /* Disconnects and frees the context */
    redisFree(c);

    return 0;
}
