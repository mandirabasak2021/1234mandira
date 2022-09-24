//Write a program to print the first 10 even natural numbers
#include <stdio.h>
int main(void)
{
	int num,i;
	for(num=1;num<=20;num++)
	{
		for(i=num;i%2==0;i++)
		{
		printf("%d\n",i);
			}
	}
	return 0;
	}