#include<stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age<18)
        printf("\nChild");
    else if(age>=18 && age<=65)
        printf("\nAdult");
    else
        printf("\nSenior");
    
}