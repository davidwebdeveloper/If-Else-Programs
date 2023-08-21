// Write a program that takes a student's grade point average (GPA) as input and prints
// "Academic Probation" if the GPA is below 2.0 and "Good Standing" otherwise.

#include<stdio.h>
int main() {
    float gpa;
    printf("Enter your gpa is : ");
    scanf("%f",&gpa);
    if(gpa<2.0)
        printf("Acadamic Probation");
    else 
        printf("Good Standing");
    return 0;
}