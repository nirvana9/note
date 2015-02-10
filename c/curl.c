/*************************************************************************
	> File Name: curl.c
	> Author: 
	> Mail: 
	> Created Time: 2015年02月10日 星期二 15时55分53秒
 ************************************************************************/

#include<stdio.h>
#include<curl/curl.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char * argv[])
{
	CURL *curl;
	CURLcode res;

	if (argc!=2)
	{
		printf("Usage:file<url>;\n");
		exit(-1);
	}
	curl = curl_easy_init();
	if(curl!=NULL)
	{
		char errorBuffer[1000];
		bzero(errorBuffer,1000);
		curl_easy_setopt(curl, CURLOPT_ERRORBUFFER, errorBuffer);
		curl_easy_setopt(curl,CURLOPT_URL,argv[1]);
		printf("---%s\n",errorBuffer);
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);

		printf("res===%d\n",res);
	}
	printf("CURLE_OK=%d\n",CURLE_OK);
	printf("CURLE_UNSUPPORTED=%d\n",CURLE_UNSUPPORTED_PROTOCOL);
	printf("CURLE_COULDNT_CONNECT=%d\n",CURLE_COULDNT_CONNECT);
	printf("CURLE_REMOTE_ACCESS_DENIED=%d\n",CURLE_REMOTE_ACCESS_DENIED);
	printf("CURLE_HTTP_RETURNED_ERROR=%d\n",CURLE_HTTP_RETURNED_ERROR);
	printf("CURLE_READ_ERROR=%d\n",CURLE_READ_ERROR);
	return 0;
}
