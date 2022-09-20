// write a program to print greater between two numbers.print one number of both are the same.
#include <stdio.h>

int main(void) {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    a>b?printf("%d greatar than %d",a,b):printf("%d greatar than %d",b,a);
    if(a==b)
    {
        printf("both numbers are same");
    }
    
    return 0;
}

