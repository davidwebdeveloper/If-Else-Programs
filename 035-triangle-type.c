// program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<stdio.h>
int main() {
    int side1,side2,side3;
    printf("Enter the three sides of the triangle: ");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2 && side2&& side3)
        printf("Equilateral triangle");
    else if(side1==side2 || side2==side3 || side1==side3)
        printf("Isolates Triangle");
    else
        printf("scalene triangle");
    return 0;
}
