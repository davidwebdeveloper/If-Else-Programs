//  program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>
int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number%5==0 && number%11==0)
        printf("\nDivisible number");
    else
        printf("\nNot Divisible number");
    return 0;

}