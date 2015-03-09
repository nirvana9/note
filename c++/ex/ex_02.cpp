/*************************************************************************
	> File Name: ex_02.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年03月09日 星期一 16时32分15秒
 ************************************************************************/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double area;
	cout << "Enter the floor area, in square feet of your home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That's the equivalent of a square " << side << "feet to the side." << endl;

	cout << "How fascinating!" << endl;

	return 0;
}

