/*************************************************************************
	> File Name: redis.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年02月04日 星期三 18时59分05秒
 ************************************************************************/
#include "redis.h"

int main()
{

	std::string ip[35];
	std::string port[35];
	std::string key[35];

	ip[0]="10.6.25.215"; port[0]="50001";
	ip[1]="10.6.23.27"; port[1]="60001";
	ip[2]="10.6.23.27"; port[2]="60002"; 
	ip[3]="10.6.23.27"; port[3]="60003"; 
	ip[4]="10.6.23.27"; port[4]="60004"; 
	ip[5]="10.6.23.27"; port[5]="60005"; 
	ip[6]="10.6.23.27"; port[6]="60006";
	ip[7]="10.6.23.27"; port[7]="60007"; 
	ip[8]="10.6.23.27"; port[8]="60008"; 
	ip[9]="10.6.23.27"; port[9]="60009"; 
	ip[10]="10.6.23.27"; port[10]="60010"; 
	ip[11]="10.6.23.27"; port[11]="60011"; 
	ip[12]="10.6.23.27"; port[12]="60012"; 
	ip[13]="10.6.23.27"; port[13]="60013"; 
	ip[14]="10.6.23.27"; port[14]="60014"; 
	ip[15]="10.6.23.27"; port[15]="60015"; 
	ip[16]="10.6.23.27"; port[16]="60016"; 
	ip[17]="10.6.22.190"; port[17]="60017"; 
	ip[18]="10.6.22.190"; port[18]="60018"; 
	ip[19]="10.6.22.190"; port[19]="60019"; 
	ip[20]="10.6.22.190"; port[20]="60020"; 
	ip[21]="10.6.22.190"; port[21]="60021"; 
	ip[22]="10.6.22.190"; port[22]="60022"; 
	ip[23]="10.6.22.190"; port[23]="60023"; 
	ip[24]="10.6.22.190"; port[24]="60024"; 
	ip[25]="10.6.22.190"; port[25]="60025"; 
	ip[26]="10.6.22.190"; port[26]="60026"; 
	ip[27]="10.6.22.190"; port[27]="60027"; 
	ip[28]="10.6.22.190"; port[28]="60028"; 
	ip[29]="10.6.22.190"; port[29]="60029"; 
	ip[30]="10.6.22.190"; port[30]="60030"; 
	ip[31]="10.6.22.190"; port[31]="60031"; 
	ip[32]="10.6.22.190"; port[32]="60032"; 
	ip[33]="10.6.24.77"; port[33]="50051"; 
	ip[34]="10.6.24.77"; port[34]="65000"; 


	int i=0;
//	for(i=0;i<35;i++;)
//	{
		Redis *r = new Redis();
		if(!r->connect("127.0.0.1", 50001))
		{
			printf("connect error!\n");
			return 0;
		}
		r->set("name", "Mayuyuiiii");
		std::cout << r->get("name") << std::endl;
//		printf("Get the name is %s\n", r->get("name").c_str());
		delete r;
//	}

	return 0;
}
