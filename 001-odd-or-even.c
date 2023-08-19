// Write a program that takes number is odd or even

#include<stdio.h>
int main() 
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number%2==0)
        printf("%d is Even number",number);
    else 
        printf("%d is Odd number",number);
    return 0;
}