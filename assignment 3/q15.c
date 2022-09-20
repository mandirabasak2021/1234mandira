//Write a program to check whether a given number is positive, negative or zero.
# include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("number is positive");
    }
    else if(a<0)
    {
        printf("number is negative");
    }
    else
    {
        printf("nuber is zero");
    }
    
}