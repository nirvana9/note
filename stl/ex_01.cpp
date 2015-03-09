/*************************************************************************
	> File Name: ex_01.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年03月06日 星期五 13时41分53秒
 ************************************************************************/

#include<iostream>
#include<iostream.h>

int compare(const void *arg1,const void *arg2);

int main()
{
	const int max_size = 10;	//数组允许元素的最大个数
	int num[max_size];			//整型数组

	//从标准输入设备读入整数，同时累计输入个数，
	//直到输入的是非整型数据为止
	
	int n;
	for(n=0;cin >> num[n];n++);

	//c标准库中的快速排序(quick-sort)函数
	qsort(num,n,sizeof(int),compare);

	//将排序结果输出到标准输出设备
	for(int i=0;i<n;i++)
		cout << num[i] <<"\n";
}

int compare(const void *arg1,const void *arg2)
{
	return (*(int *)arg1 < *(int *)arg2)?-1:(*(int *)arg1>*(int *)arg2)?1:0;
}
