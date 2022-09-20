//Write a program to check whether a given number is divisible by 7 or divisible by 3.
# include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if((a%7==0) && (a%3==0))
    {
        printf("number is divisible by 7 and divisible by 3.");
    }
    else
    {
        printf("number is not divisible by 7 and divisible by 3.");
    }
    
}