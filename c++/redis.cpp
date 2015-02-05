/*************************************************************************
	> File Name: redis.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年02月04日 星期三 18时59分05秒
 ************************************************************************/
#include "redis.h"

int main()
{
	Redis *r = new Redis();
	if(!r->connect("127.0.0.1", 50002))
	{
		printf("connect error!\n");
		return 0;
	}
	r->set("name", "Mayuyu");
	printf("Get the name is %s\n", r->get("name").c_str());
	delete r;
	return 0;
}
