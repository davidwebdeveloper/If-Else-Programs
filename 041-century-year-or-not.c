// . Implement a program that checks if a given year is a century year (ending with "00") using if-else
// // statements.

#include<stdio.h>
int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if(year%100==0)
        printf("Centurian");
    else
        printf("Not a Centurian");
    return 0;
}