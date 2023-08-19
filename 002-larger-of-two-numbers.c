// Write a program that takes two integer and prints the largest number

#include<stdio.h>
int main()
{
    int number1,number2;
    printf("Enter the number:");
    scanf("%d%d",&number1,&number2);
    if(number1>number2)
        printf("%d is larger number",number1);
    else
        printf("%d is larger number",number2);
    return 0;
}