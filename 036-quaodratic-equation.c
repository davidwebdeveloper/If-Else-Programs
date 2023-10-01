// Write a program to find the all the roots of the quodratic equation

#include<stdio.h>
#include<math.h>

int main() {
    float a,b,c,D,imaginary;
    float root1,root2;
    printf("Enter the co-efficients of the equation:" );
    scanf("%f%f%f",&a,&b,&c);
    D = (b*b)-(4*a*c);
    printf("Discriminant is = %.2f",D);
    if(D>0)
    {
       root1 = (-b+sqrt(D)/(2*a));
       root2 = (-b-sqrt(D)/(2*a));
       printf("\nDiscriminant>0 then 2 real roots are exist\n");
       printf("Root1 = %.2f",root1);
       printf("\nRoot2=%.2f",root2);
    }
    else if (D==0)
    {
        root1 = -b / (2*a);
        root2 = root1;
        printf("Discriminant==0 then two roots are exist and both are equal");
        printf("\nRoot1=%.2f",root1);
        printf("nRoot2 = %.2f",root2);
    }
    else
    {
        root1 = -b / (2*a);
        root2 = root1;
        imaginary = sqrt(-D)/(2*a);
        printf("\nD<0 the r roots are equal and imaginary are occured");
        printf("\nroot1=%.2f+%.2f",root1,imaginary);
        printf("\nroot2=%.2f - %.2f",root2,imaginary);
    }
    return 0;
   
}