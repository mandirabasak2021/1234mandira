//Write a program to check whether a given year is a leap year or not.
#include <stdio.h>

int main(void) {
    int a;
    printf("Enter a year: ");
    scanf("%d",&a);
    if(a%100==0)
    {
     if(a%400==0)
     {
        printf("leap year");
    }
    else 
    {
        printf("Not leap year");
    }
    }
    else
    {
        if(a%4==0)
        {
            printf("leap year");
        }
            else
            {
                printf("Not leap year");
            }
    }
    return 0;
}
