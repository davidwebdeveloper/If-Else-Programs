// Write a program that takes a person's blood pressure as input and prints "Normal" if the
// systolic blood pressure is below 120 and the diastolic blood pressure is below 80,
// "Elevated" if the systolic blood pressure is between 120 and 129 and the diastolic blood
// pressure is below 80, "Stage 1 Hypertension" if the systolic blood pressure is between
// 130 and 139 or the diastolic blood pressure is between 80 and 89, and "Stage 2
// Hypertension" if the systolic blood pressure is 140 or higher or the diastolic blood
// pressure is 90 or higher.

#include<stdio.h>
int main() {
    int systolicP,diastolicP;
    printf("Enter the Systolic pressure of the person: ");
    scanf("%d",&systolicP);
    printf("Enter the diastolic pressure of the person: ");
    scanf("%d",&diastolicP);
    if(systolicP<120 &&diastolicP<80)
        printf("Normal");
    else if((systolicP>=120 && systolicP<=129) && diastolicP<80)
        printf("Elevated");
    else if((systolicP>=130 && systolicP<=139) && (diastolicP>=80 && diastolicP<=89))
        printf("Stage 1 Hypertension");
    else
        printf("Stage 2 Hypertension");
    return 0;
}