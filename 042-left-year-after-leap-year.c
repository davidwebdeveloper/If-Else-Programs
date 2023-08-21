// Create a program that checks if a given year is a leap year and, if not, displays the number of years
// left until the next leap year using if-else statements

#include<stdio.h>
int main() {
    int year,new;
    printf("Enter the year: ");
    scanf("%d",&year);
    if((year%100==0 && year%400==0) || (year%100!=0 && year%4==0))
        printf("Leap Year");
    else if(year%400!=0)
    {
        if(year%100==0)
            printf("The left years is = 4");
        else
            printf("The left year is = %d",4-year%4);
    }
    return 0;
}