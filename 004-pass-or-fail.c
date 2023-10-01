// Write a program that takes grade percentage as a input and prints the pass of fail

#include<stdio.h>
int main()
{
    int gradeP;
    printf("Enter your grade percentage: ");
    scanf("%d",&gradeP);
    if(gradeP>=60)
        printf("Pass");
    else
        printf("Fail");
    return 0;
}