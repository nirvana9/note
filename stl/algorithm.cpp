/*************************************************************************
	> File Name: algorithm.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年03月09日 星期一 13时49分28秒
 ************************************************************************/

#include<iostream>
#include<algorithm>

#define N 10
using namespace std;

int main()
{
	int a[N];
	sort(a,a+N);
	next_permutation(a,a+N);

	vector<int> ivec;
	sort(ivec.begin(),ivec.end());
	next_permutation(ivec.begin(),ivec.end());

	/*
	vector<int> myVec;
	sort(myVec.begin(),myVec.end());
	do{
		for(int i=0;i<myVec.size;i++)
			cout << myVec[i]<<"/t";
		cout << endl;
	}while(next_permutation(myVec.begin(),myVec.end()));
*/
	return 0;



}

