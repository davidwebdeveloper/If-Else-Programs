// Write a program that takes a number as a input to prints the prime or not
#include<stdio.h>
int main()
{
    int number,i,count=0;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            count = count + 1;
        }
    }
    if(count>2)
        printf("%d is a Composite number",number);
    else
        printf("%d is a prime number",number);
    return 0;
}