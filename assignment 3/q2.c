//write a program to check whether a given number is divisible by 5 or not.
#include <stdio.h>

int main(void) {
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    a%5==0?printf("divisible by 5"):printf("not divisible by 5");
    return 0;
}
