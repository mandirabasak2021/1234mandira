//Write a program to print cubes of the first 10 natural number.
#include <stdio.h>

int main(void)
{
	int num,i,s=0;
	for(num=1;num<=10;num++)
	{
		i=num*num*num;
		
		printf("%d\n",i);
			}
	
	return 0;
	}