//Write a program to check whether a given number is positive or non-positive.
#include <stdio.h>

int main(void) {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    a>=0?printf("positive"):printf("non-positive");
    return 0;
}
