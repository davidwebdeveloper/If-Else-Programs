// Write a program that takes a person's income as input and prints the person's tax
// bracket. The program should print "No Tax" if the income is below the taxable income
// threshold, "Low Tax Bracket" if the income is between the taxable income threshold and
// the middle-income tax bracket, "Middle Tax Bracket" if the income is between the
// middle-income tax bracket and the high-income tax bracket, and "High Tax Bracket" if
// the income is above the high-income tax bracket.

#include<stdio.h>
int main() {
    float income;
    printf("Enter the income of the person: ");
    scanf("%f",&income);
    float taxable_income_threshold = 15000;
    float Middle_income = 40000;
    float hight_income = 150000;
    if(income<taxable_income_threshold)
        printf("No Tax");
    else if(income>=taxable_income_threshold && income<=Middle_income)
        printf("Low tax bracket");
    else if(income>=Middle_income && income<=hight_income)
        printf("Middle Tax Bracket");
    else
        printf("Hight Tax Bracket");

}