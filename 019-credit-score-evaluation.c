// Write a program that takes a person's credit score as input and prints "Poor Credit" if
// the credit score is below 600, "Fair Credit" if the credit score is between 600 and 699,
// "Good Credit" if the credit score is between 700 and 799, and "Excellent Credit" if the
// credit score is 800 or higher

#include<stdio.h>
int main() {
    int credit_score;
    printf("Enter the credit score : ");
    scanf("%d",&credit_score);
    if(credit_score<600)
        printf("Poor Credit Score");
    else if(credit_score>=600 && credit_score<=699)
        printf("Fair Credit");
    else if(credit_score>=700 && credit_score<=799)
        printf("Good Credit");
    else 
        printf("Exellent Credit");
    return 0;
}