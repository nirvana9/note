/*************************************************************************
	> File Name: exceed.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年03月13日 星期五 16时02分56秒
 ************************************************************************/

#include<iostream>
#include<climits>
using namespace std;


int main(int argc, char **argv)
{
	int n_int = INT_MAX;
	short n_short= SHRT_MAX;

	int m_int = INT_MIN;
	short m_short= SHRT_MIN;

	cout <<"n_int =" << n_int << endl;
	cout <<"n_short =" << n_short << endl;

	cout <<"n_int +10 =" << n_int +10 << endl;
	cout <<"n_short +10 =" << n_short+10 << endl;

	cout <<"m_int =" << m_int << endl;
	cout <<"m_short =" << m_short << endl;

	cout << "Year=" << 1234 <<endl;

	return 0;
}
