#include<stdio.h>
int main(){
    int number1,number2,number3;
    printf("Enter the numbers: ");
    scanf("%d%d%d",&number1,&number2,&number3);
    if(number1==number2 || number1==number3) {
        printf("%d has the highest frequency",number1);
    }
    else if(number2==number1 || number2==number3)
        printf("%d has the highest frequency",number2);
    else if (number3==number1 || number3 == number2)
        printf("%d has the highest frequency",number3);
    else {
        if(number1<number2 && number1<number3)
        {
            printf("The smallest number is = %d",number1);
        }
        else if(number2<number3 && number2<number1)
            printf("The smallest number is = %d",number2);
        else 
            printf("The smallest number is = %d",number3);
    }
    return 0;
}