//Write a program to check whether a given number is a three-digit number or not.
#include <stdio.h>

int main(void) {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    a>=100 && a<=999?printf("%d number is a three-digit number"):printf("%dnumber is a not three-digit number");
    return 0;
}

