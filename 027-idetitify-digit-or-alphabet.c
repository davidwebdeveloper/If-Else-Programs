// program to input any character and check whether it is alphabet, digit or special
// character.

#include<stdio.h>
int main() {
    char character;
    printf("Enter the character: ");
    scanf("%c",&character);
    if(character>=48 && character<=57)
        printf("%c is a digits",character);
    else if((character>=65 && character<=92) || (character>=97 && character<=122))
        printf("%c is Alphabet",character);
    else 
        printf("%c is special character",character);
    return 0;
}