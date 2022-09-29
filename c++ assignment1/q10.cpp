//10. Write a C++ program to add all the numbers of an array of size 10.
#include <iostream>
using namespace std;
int main()
{
	int a[10],i,sum=0;
	cout<<"Enter 10 numbers: ";
	for(i=0;i<10;i++)
	{
	cin>>a[i];
	sum=a[i]+sum;
		}
	cout<<"add all the numbers "<<sum;
	return 0;
	}
