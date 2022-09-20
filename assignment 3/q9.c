/*Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/
#include <stdio.h>

int main(void) {
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("1st number is greater than 2nd number and 3rd number");
    }
    if(b>a && b>c)
    {
        printf("2nd number is greater than 1st number and 3rd number");
    }
    if(c>a && c>b)
    {
        printf("3rd number is greater than 1st number and 2nd number");
    }
    
    else
    {
        printf("Three number are equal");
    }
    
    
    return 0;

}
