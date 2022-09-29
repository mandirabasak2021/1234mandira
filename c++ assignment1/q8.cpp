//Write a C++ program to swap values of two int variables without using third variable/
#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"swap value: "<<a <<" " <<b;
	return 0;
	}
