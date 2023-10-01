// Write a program that takes three integer as output and prints the smallest number

#include<stdio.h>
int main()
{
    int number1,number2,number3;
    printf("Enter list of three numbers: ");
    scanf("%d%d%d",&number1,&number2,&number3);
    if(number1<number2 && number1<number3)
        printf("%d is smallest number",number1);
    else if(number2<number1 && number2<number3)
        printf("%d is smallest number",number2);
    else
        printf("%d is smallest number",number3);

    return 0;
}