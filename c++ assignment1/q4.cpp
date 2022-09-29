//Write a C++ program to calculate the area of a circle.
#include <iostream>
using namespace std;
int main()
{
	float pi=3.14,r,area;
	cout<<"Enter radious of a circle: ";
	cin>> r;
	area=pi*r*r;
	cout<<" Area of a circle "<<area;
	return 0;
	}
