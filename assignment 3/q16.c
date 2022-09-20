/* Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/
#include <stdio.h>

int main(void) {
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if((a>='A') &&(a<='Z'))
    {
        printf("alphabet is uppercase");
    }
    else if((a>='a') &&(a<='z'))
    {
        printf("alphabet is lowercase");
    }
     else if((a>='0') && (a<='9'))
     {
            printf("digit");
     }
     else 
        {
            printf("special character");
        }

    return 0;
}
