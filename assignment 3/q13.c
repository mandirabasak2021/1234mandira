// Write a program to check whether a given number is divisible by 3 and divisible by 2.
# include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if((a%2==0) && (a%3==0))
    {
        printf("number is divisible by 3 and divisible by 2.");
    }
    else
    {
        printf("number is not divisible by 3 and divisible by 2.");
    }
    
}