//5. Write a C++ program to calculate the volume of a cuboid.
#include <iostream>
using namespace std;
int main()
{
	float length,width,height,volume;
	cout<<"Enter length,width,height: "<<endl;
	cin>>length>>width>>height;
	volume=length*width*height;
	cout<<"volume of a cuboid:"<<volume;
	return 0;
	}
