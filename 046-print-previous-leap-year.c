// Implement a program that checks if a given year is a leap year and, if not, displays the previous leap
// year using if-else statements.

#include<stdio.h>
int main() {
    int year,bal;
    printf("Enter the year: ");
    scanf("%d",&year);
    if(year%100==0 && year%400==0)
        printf("leap year");
    else if(year%100!=0 && year%4==0)
        printf("Leap year");
    else if(year%100==0 && year%400!=0)
        printf("previous Leap year = %d",year-4);
    else
    {
        bal = year%4;
        printf("previous leap year = %d",year-bal);
    }
    return 0;

}