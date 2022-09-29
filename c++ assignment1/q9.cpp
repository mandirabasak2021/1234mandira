//Write a C++ program to find the maximum of two numbers./
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	if(a>b)
	{
		cout<< a<<" 1st number is largest"<<endl <<b<<" 2nd number is smallest";
		}
		else if(b>a)
		{
			cout<< b<<" 2nd number is largest"<<endl <<a<<" 1st number is smallest";
			}
			else
			{
				cout<<"two number is equal";
			}

	return 0;
	}
