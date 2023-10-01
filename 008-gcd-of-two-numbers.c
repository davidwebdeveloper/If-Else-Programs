//  Write a program that takes the two integer as input and prints the GCD

#include<stdio.h>
int main() {
    int number1,number2,min,gcd,i;
    printf("Enter the two numbers: ");
    scanf("%d%d",&number1,&number2);
    if(number1<number2){
        min = number1;
    }
    else {
        min = number2;
    }

    for(i=1;i<=number2;i++) {
        if(number1%i==0 && number2%i==0)
            gcd = i;
    }
    printf("GCD of %d and %d is = %d",number1,number2,gcd);
    return 0;
}