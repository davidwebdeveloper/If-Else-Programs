// program to input any alphabet and check whether it is vowel or consonant.

#include<stdio.h>
int main() {
    char character;
    printf("Enter the character: ");
    scanf("%c",&character);
    if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u' || character=='A' || character=='E' || character=='I' || character=='O' || character=='U')
        printf("%c is a vowel",character);
    else 
        printf("%c is consonent",character);
    
}