// program to input electricity unit charges and calculate total electricity bill
// according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit

#include<stdio.h>
int main() {
    int unit;
    float bill;
    printf("Enter the electricity in unit: ");
    scanf("%d",&unit);
    if(unit<=50)
        bill = unit * 0.50;
    else if(unit<=100)
        bill = unit*0.75;
    else
        bill = unit*1.2;
    printf("Electricity bill is: %.2f",bill);
    return 0;
}