// Write a program that takes year as input to prints the leap year or not

#include<stdio.h>
int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if((year%100==0 && year%400==0) || (year%100!=0 && year%4==0)) {
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }
    return 0;
}