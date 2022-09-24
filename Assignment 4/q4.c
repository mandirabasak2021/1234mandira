//Write a program to print the first 10 odd natural numbers in reverse order.
#include <stdio.h>
int main(void)
{
	int num,i;
	for(num=20;num>=1;num--)
	{
		for(i=num;i%2==!0;i++)
		{
		printf("%d\n",i);
			}
	}
	return 0;
	}