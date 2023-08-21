//  Implement a program that checks if a given number is a perfect square using if-else statements

#include<stdio.h>
#include<math.h>
int main() {
    int n;
    double temp;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp = sqrt(temp);
    if(temp*temp==n)
        printf("Perfect Number");
    else
        printf("Not a perfect Number");
    return 0;
    
}