// 38. program to input marks of five subjects Physics, Chemistry, Biology, Mathematics
// and Computer. Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

#include<stdio.h>
int main() {
    int physics, chemistry,biology,maths,computer;
    float percent;
    printf("Enter the marks of \nPhysics\nChemistry\nBiology\nMaths\nComputer\n");
    scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&maths,&computer);
    percent = (physics + chemistry + biology + computer + maths) / 5;
    if(percent>=90)
        printf("\nGrade A");
    else if(percent>=80)
        printf("\nGrade B");
    else if(percent>=70)
        printf("\nGrade C");
    else if(percent>=60)
        printf("\nGrade D");
    else if(percent>=40)
        printf("\nGrade E");
    else
        printf("Grade F");
    return 0;

}

