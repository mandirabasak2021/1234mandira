/*Write a program to check whether a given number is an even number or an odd
number.*/
#include <stdio.h>

int main(void) {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    a % 2==0?printf("even no"):printf("odd no ");
    return 0;
}
