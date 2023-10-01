// Write a program that takes three integer and find the maximum

#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter the three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("\n%d is maximum number",a);
    else if(b>a && b>c)
        printf("\n%d is maximum number",b);
    else
        printf("\n%d is maximum number",c);
    return 0;
}