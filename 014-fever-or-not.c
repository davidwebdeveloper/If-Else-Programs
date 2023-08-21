// Write a program that takes the temperature as input and prints the fever or not

#include<stdio.h>
int main() {
    int temperature;
    printf("Enter the temperature: ");
    scanf("%d",&temperature);
    if(temperature>=37.5)
        printf("\nFever");
    else
        printf("\nNo Fever");
    return 0;
}