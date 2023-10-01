// Write a program that converts a given temperature from Celsius to Fahrenheit or vice versa based
// on user choice using if-else statements.

#include<stdio.h>
int main() {
    float temp;
    int choice;
    printf("1.Celsius to Faranheit converter\n2.Faranheit to Celsius converter");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter the temperature: ");
    scanf("%f",&temp);
    if(choice==1)
    {
        printf("Faranheit of %.2f is = %.2f",temp,((float)9/5*temp+32));
    }
    else if(choice==2)
        printf("Celsius of %.2f is %.2f",temp,(5/9*(temp-32)));
        
    else
        printf("Wrong Choice");
    return 0;
}