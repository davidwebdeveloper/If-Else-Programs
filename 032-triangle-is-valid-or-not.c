// program to input angles of a triangle and check whether triangle is valid or not

#include<stdio.h>
int main() {
    int angle1,angle2,angle3;
    printf("Enter the Tri angles of triangle: ");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    if(angle1+angle2+angle3==180)
        printf("%d,%d and %d makes valid triangle.",angle1,angle2,angle3);
    else
        printf("not a valid triangle");
    return 0;
}