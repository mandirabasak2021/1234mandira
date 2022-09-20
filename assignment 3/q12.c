//Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>

int main(void) {
    char a;
    printf("Enter a alphabet: ");
    scanf("%c",&a);
    if((a>='A') &&(a<='Z'))
    {
        printf("alphabet is in uppercase");
    }
    else
    {
        printf("alphabet is lowercase");
    }

    return 0;
}
