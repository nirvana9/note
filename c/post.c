/*************************************************************************
	> File Name: post.c
	> Author: 
	> Mail: 
	> Created Time: 2015年02月10日 星期二 16时34分09秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

#define POSTURL "https://apitest.wecomics.cn/jsonrpc/apicheck.json"
#define FILENAME "curlposttest.log"

size_t write_data(void *buffer, size_t size, size_t nmemb, void *userp);

int main(int argc, char *argv[]) {
	CURL *curl;
	CURLcode res;
	FILE *fptr;
	struct curl_slist *http_header = NULL;

	if ((fptr = fopen(FILENAME, "w")) == NULL) {
		fprintf(stderr, "fopen file error: %s\n", FILENAME);
		exit(1);
	}

	curl = curl_easy_init();
	curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0);
	curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0);
	curl_easy_setopt(curl, CURLOPT_URL, POSTURL);
//	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, POSTFIELDS);
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, fptr);
	curl_easy_setopt(curl, CURLOPT_POST, 1);
	curl_easy_setopt(curl, CURLOPT_VERBOSE, 1);
	curl_easy_setopt(curl, CURLOPT_HEADER, 1);
	curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1);
//	curl_easy_setopt(curl, CURLOPT_COOKIEFILE, "/Users/zhu/CProjects/curlposttest.cookie");
	printf("1111111111111111111\n");
	res = curl_easy_perform(curl);
	printf("2222222222222222222\n");
	curl_easy_cleanup(curl);
	printf("3333333333333333333\n");
	return 0;
}

size_t write_data(void *buffer, size_t size, size_t nmemb, void *userp) {
	FILE *fptr = (FILE*)userp;
	fwrite(buffer, size, nmemb, fptr);
}
