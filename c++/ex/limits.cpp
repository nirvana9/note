/*************************************************************************
	> File Name: limits.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年03月13日 星期五 15时49分58秒
 ************************************************************************/

#include<iostream>
#include<climits>
using namespace std;


int main()
{
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	
	cout << "int is " << sizeof(int) << "bytes." << endl;
	cout << "int is_ " << sizeof n_int << "bytes." << endl;
	cout << "short is " << sizeof(short) << "bytes." << endl;
	cout << "long is " << sizeof(long) << "bytes." << endl;
	cout << "char max is " << CHAR_MAX << endl;
	cout << "char min is " << CHAR_MIN << endl;

	unsigned short xx = n_short;

	cout << "n_short=" << n_short<<endl;
	cout << "xx=" << xx<<endl;

	return 0 ;

}
