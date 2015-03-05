/*************************************************************************
	> File Name: getmeminfo.c
	> Author: 
	> Mail: 
	> Created Time: 2015年02月27日 星期五 11时19分46秒
 ************************************************************************/

#include<stdio.h>
unsigned int get_mem_free()  
{  
    unsigned int mem_total=0;  
    unsigned int mem_free=0;  
    char a[20],b[20],c[20],d[20];  
  
    FILE* f1 = fopen("/proc/meminfo","r");    
    fscanf(f1, "%s\t%d\t%s\n",a,&mem_total,b,c,&mem_free,d);    
    fclose(f1);   
  
    return mem_free/1024;//MB  
}

int main(int argc, char* argv[])
{

	int mem = get_mem_free();
	printf("asd%d\n",mem);
	return 0;

}  

