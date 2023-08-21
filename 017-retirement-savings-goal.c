// Write a program that takes a person's age and income as input and prints the person's
// retirement savings goal. The program should print "No Retirement Savings Needed" if
// the person is under 18 or over 65, "Low Retirement Savings Goal" if the person's income
// is below the middle-income threshold, "Middle Retirement Savings Goal" if the person's
// income is between the middle-income threshold and the high-income threshold, and
// "High Retirement Savings Goal" if the person's income is above the high-income
// threshold.

#include<stdio.h>
int main() {
    int age;
    float income;
    float middle_income_threshold = 40000;
    float high_income_threshold = 150000;
    float low_income_threshold = 15000;
    printf("Enter the age of the person: ");
    scanf("%d",&age);
    printf("Enter your income: ");
    scanf("%f",&income);
    if(age<18 || age>65)
        printf("No retirement savings goal");
    else if(income<middle_income_threshold)
        printf("Low Retirement Savings Goal");
    else if(income>=middle_income_threshold && income<=high_income_threshold)
        printf("Middle Retirement Savings Goal");
    else 
        printf("High Retirement Savings Goal");
    return 0;
}