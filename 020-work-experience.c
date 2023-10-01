// Write a program that takes a person's age and number of years of work experience as input
// and prints "Entry-level" if the person is under 25 and has less than 1 year of work experience,
// "Junior" if the person is between 25 and 40 and has between 1 and 5 years of work experience,
// "Senior" if the person is over 40 and has between 5 and 10 years of work experience, and
// "Expert" if the person is over 40 and has more than 10 years of work experience.


#include<stdio.h>
int main() {
    int age,workE;
    printf("Enter the age: ");
    scanf("%d",&age);
    printf("Enter the work experience: ");
    scanf("%d",&workE);
    if(age<25 && workE<1)
        printf("Entry Level");
    else if((age>=25 && age<=40) && (workE>=1 && workE<=5))
        printf("Junior Level");
    else if((age>40) && (workE>=5 && workE<=10))
        printf("Senior Level");
    else
        printf("Expert Level");
    return 0; 

}