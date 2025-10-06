#include<stdio.h>
int main()
{
    float p,r,t;
    printf("Enter principal amount: ");
    scanf("%f",&p);
     printf("\nEnter rate: ");
    scanf("%f",&r);
     printf("\nEnter time: ");
    scanf("%f",&t);
    float si =(p*r*t)/100;
    printf("\nThe simple interest is :%f",si);
}