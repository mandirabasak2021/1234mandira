/*Write a program to check whether a given number is an even number or an odd
number without using % operator.*/

#include <stdio.h>

int main(void) {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
   ((a&1)==0)?printf("even no"):printf("odd no ");
    return 0;
}
