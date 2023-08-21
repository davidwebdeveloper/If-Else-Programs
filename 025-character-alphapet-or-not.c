//  program to check whether a character is alphabet or not.

#include<stdio.h>
int main() {
    char letter;
    printf("Enter the character: ");
    scanf("%c",&letter);
    if((letter>=65 && letter<=90) || (letter>=97 && letter<=122))
        printf("%c is a character",letter);
    else
        printf("%c is not a character",letter);
    return 0;
}