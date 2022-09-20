/*Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/
#include <stdio.h>

int main(void) {
    int os,math,architeture,cpp,unix,total;
    float persentage;
    printf("Enter your marks of 5 subjects:\n ");
    printf("Enter your opareting system marks :");
    scanf("%d",&os);
    printf("Enter your mathemetics marks :");
    scanf("%d",&math);
    printf("Enter your computer architeture marks :");
    scanf("%d",&architeture);
    printf("Enter your c++ marks :");
    scanf("%d",&cpp);
    printf("Enter your unix marks :");
    scanf("%d",&unix);
    if (os>=33 && math>=33 && architeture>=33 && cpp>=33 && unix>=33)
    {
        printf("candidate passed");
    }
    else
    {
        printf("candidate fail");
    }
    total=os+math+architeture+cpp+unix;
    printf("\ntotal number of candidate %d",total);
    persentage=total/5;
    printf("\npercentage of candidate %f %%",persentage);
    return 0;
}
