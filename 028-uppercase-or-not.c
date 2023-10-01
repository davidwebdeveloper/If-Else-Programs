// program to check whether a character is uppercase or lowercase alphabet.

#include<stdio.h>
int main() {
    char character;
    printf("Enter the character: ");
    scanf("%c",&character);
    if(character>=65 && character<=90)
        printf("%c is Uppercase",character);
    else
        printf("%c is lowecase",character);
    return 0;
}