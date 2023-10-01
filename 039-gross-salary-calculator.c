// program to input basic salary of an employee and calculate its Gross salary
// according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>
int main() {
    float salary,GS;
    printf("Enter your salary: ");
    scanf("%f",&salary);
    if(salary<=10000)
        GS = salary + salary *  0.2 + salary * 0.8;
    else if(salary <=20000)
        GS = salary * 0.25 + salary * 0.9 + salary;
    else
        GS = salary + salary * 0.3 + salary * 0.95;
    printf("Gross Salary is = %.2f",GS);
    return 0;
}