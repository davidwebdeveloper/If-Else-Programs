// program to count total number of notes in given amount.

#include<stdio.h>
int main() {
    int count,amount;;
    printf("Enter the amount: ");
    scanf("%d",&amount);
    if(amount>=2000)
    {
        printf("\nThe 2000 note is = %d",amount / 2000);
        amount = amount %2000;
    }
    if(amount>=500)
    {
        printf("\nThe 500 note is = %d",amount / 500);
        amount = amount % 500;
    }
    if(amount>=200)
    {
        printf("\nThe 200rs note is = %d",amount / 200);
        amount = amount % 200;
    }
    if(amount>=100)
    {
        printf("\nThe 100rs note is = %d",amount/100);
        amount = amount %100;
    }
    if(amount>=50)
    {
        printf("\nThe 50rs note is = %d",amount / 50);
        amount = amount % 100;
    }
    if(amount>=20)
    {
        printf("\nThe 20rs note is = %d",amount/20);
        amount = amount%20;
    }
    if(amount>=10)
    {
        printf("\nThe 10rs note is = %d",amount/10);
        amount = amount%10;
    }
    return 0;

}