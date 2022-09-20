/*Write a program which takes the month number as an input and display number of
days in that month*/
#include <stdio.h>

int main(void) {
    int a;
    printf("Enter the month number: ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Month is january-31 days");
    }
    else if(a==2)
    {
        printf("Month is february-28 days in a common year and 29 days in leap years");
    }
    else if(a==3)
    {
        printf("Month is march-31 days");
    }
    else if(a==4)
    {
        printf("Month is April-30 days");
    }
    else if(a==5)
    {
        printf("Month is May-31 days");
    }
    else if(a==6)
    {
        printf("Month is june-30 days");
    }
    else if(a==7)
    {
        printf("Month is july-31 days");
    }
    else if(a==8)
    {
        printf("Month is August-31 days");
    }
    else if(a==9)
    {
        printf("Month is September-30 days");
    }
    else if(a==10)
    {
        printf("Month is Oct0ber-31 days");
    }
    else if(a==11)
    {
        printf("Month is November-30 days");
    }
    else if(a==12)
    {
        printf("Month is december-31 days");
    }

    return 0;
}
