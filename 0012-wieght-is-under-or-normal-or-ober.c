// Write a program that identify the person's weight condition based on weight
#include<stdio.h>
int main() {
    int weight;
    printf("Enter your weight: ");
    scanf("%d",&weight);
    if(weight<18.5)
        printf("Under Weight");
    else if(weight>=18.5 && weight<=24.9)
        printf("Normal weight");
    else if(weight>25 && weight<=29.9)
        printf("Over weight");
    else
        printf("Obese");
    return 0;
}