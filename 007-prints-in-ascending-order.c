// Write a program that takes the three integer as input and prints them in asending order

#include<stdio.h>
int main()
{
    int number1,number2,number3;
    int small,large,middle;
    printf("Enter three number you want to ascending: ");
    scanf("%d%d%d",&number1,&number2,&number3);
    if(number1>number2 && number1>number3){
        large = number1;
        if(number2>number3) {
            
            small = number3;
            middle = number2;
        }
        else {
            
            small = number2;
            middle = number3;// Write a program that takes the three integer as input and prints them in asending order

#include<stdio.h>
        }
    }
    else if(number2>number3 && number2>number1)
    {
        large=number2;
        if(number3>number1)
        {
            small = number1;
            middle = number3;
        }
        else{
            small = number3;
            middle = number2;
        }
    }
    else {
        large = number3;
        if(number1>number2)
        {
            small = number2;
            middle = number1;
        }
        else
        {
            small = number1;
            middle =number2;
        }
    }
    printf("\nAscendingg order is = %d  %d  %d",small,middle,large);
    return 0;
}