// Write a program that takes the two integer and string and perform basic maths operations

#include<stdio.h>
int main() {
    int number1,number2,string,result;
    printf("Enter the number1 and number2: ");
    scanf("%d%d",&number1,&number2);
    printf("Choose the operation:\n1. Addition\n2. Subtraction\n3. Multiblication\n4. Division\n");
    scanf("%d",&string);
    if(string==1) {
        result = number1+number2;
    }
    else if(string==2) {
        result = number1-number2;
    }
    else if(string==3) {
        result = number1*number2;
    }
    else {
        result = number1/number2;
    }
    printf("The result is = %d",result);
    return 0;
}