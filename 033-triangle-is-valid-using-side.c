// program to input all sides of a triangle and check whether triangle is valid or not

#include<stdio.h>
int main() {
    int side1,side2,side3;
    printf("Enter the length of 3 sides of the triangle : ");
    scanf("%d%d%d",&side1,&side2,&side3);
    if((side1+side2 > side3) || (side2+side3>side1) || (side1+side3 > side2))
        printf("\nTriangle is valid");
    else
        printf("\nTriangle is not valid");
    return 0;

}