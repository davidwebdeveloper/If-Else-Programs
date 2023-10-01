// Write a program that takes two integer find maximum

#include<stdio.h>
int main() {
    int number1,number2;
    printf("Enter the first number: ");
    scanf("%d",&number1);
    printf("Enter the second number: ");
    scanf("%d",&number2);
    if(number1>number2)
        printf("Maximum number is = %d",number1);
    else if(number1<number2)
        printf("Maximum number is = %d",number2);
    else 
        printf("The two numbers are same");
    return 0;
}