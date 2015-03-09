/*************************************************************************
	> File Name: ex_02.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年03月09日 星期一 11时20分52秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
	vector<int> num;
	int element;

	while(cin >> element)
		num.push_back(element);

	sort(num.begin(),num.end());

	for(int i=0;i<num.size();i++)
		cout << num[i] <<"\n";
	return 0;
}

