/*Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/
#include <stdio.h>

int main(void) {
    int cp,sp,profit,loss;
    printf("Enter cost price: ");
    scanf("%d",&cp);
    printf("Enter selling price: ");
    scanf("%d",&sp);
    profit=((sp-cp)*100)/cp;
    loss=((cp-sp)*100)/cp;
    if (profit>0)
    {
        printf("profit on the product %d %%",profit);
    }
     else if (profit<0)
     {
        printf("loss on the product %d %%",loss); 
     }
     else
     {
        printf("no profit no loss");
     }
    
    return 0;
}
