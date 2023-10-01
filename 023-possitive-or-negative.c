//  program to check whether a number is negative, positive or zero.

#include<stdio.h>
int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number<0)
        printf("%d is negative number",number);
    else    
        printf("%d is possitive number",number);
    return 0;
}