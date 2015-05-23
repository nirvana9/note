/*************************************************************************
	> File Name: ex_05.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年05月23日 星期六 00时26分52秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char **argv)
{
    typedef vector<int> X;
    X x;
    X it = x.begin();
    x.insert(it,1,1);
    return 0;
}
