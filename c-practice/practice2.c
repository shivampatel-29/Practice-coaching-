#include<stdio.h>
int main()
{
    float x1,x2,x3,x4,x5;
    printf("Enter marks: ");
    scanf("%f%f%f%f%f",&x1,&x2,&x3,&x4,&x5);
    
    float percentage= (x1+x2+x3+x4+x5)/5;
    printf("Percentage is : %f",percentage);

}