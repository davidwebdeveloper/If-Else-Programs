// Write a program for calculate profit and Loss
#include<stdio.h>
int main() {
    int costP,sellP;
    int diff;
    printf("Enter the cost price: ");
    scanf("%d",&costP);
    printf("Enter the selling price: ");
    scanf("%d",&sellP);
    diff = sellP-costP;
    if(diff>0)
        printf("\nProfit is = %d ",diff);
    else if(diff<0)
        printf("\nLoss is = %d",-diff);
    else
        printf("No loss and No profit");
    return 0;
}