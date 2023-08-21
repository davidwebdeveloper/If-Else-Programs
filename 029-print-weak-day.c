// program to check whether a character is uppercase or lowercase alphabet.

#include<stdio.h>
int main() {
    int weakN;
    printf("Enter the weak number: ");
    scanf("%d",&weakN);
    if(weakN==1)
        printf("Sunday");
    else if(weakN==2)
        printf("Monday");
    else if(weakN==3)
        printf("Tuesday");
    else if(weakN==4)
        printf("Wednesday");
    else if(weakN==5)
        printf("Thursday");
    else if(weakN==6)
        printf("Friday");
    else
        printf("Saturday");
    return 0;
}