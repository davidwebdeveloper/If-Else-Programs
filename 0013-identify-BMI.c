// Write a program that takes the height and weight as input and calulates the BMI and prints them

#include<stdio.h>
int main() {
    float height,bmi;
    int weight;
    printf("Enter your height in meter: ");
    scanf("%f",&height);
    printf("\nEnter your weight in kg: ");
    scanf("%d",&weight);
    bmi = weight / (height*height);
    printf("\nYour BMI is = %.2f\n",bmi);
    if(bmi<18.5)
        printf("Under Weight");
    else if(bmi>=18.5 && bmi<=24.9)
        printf("Normal weight");
    else if(bmi>25 && bmi<=29.9)
        printf("Over weight");
    else
        printf("Obese");
    return 0;
}