//  Create a program that takes a student's score out of 100 and prints "Pass" if the score is above or
// equal to 50; otherwise, print "Fail" using if-else statements.

#include<stdio.h>
int main() {
    int mark;
    printf("Enter the mark: ");
    scanf("%d",&mark);
    if(mark>=50)
        printf("Pass");
    else
        printf("Fail");
    return 0;
}