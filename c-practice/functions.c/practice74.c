#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Values before swapping: a:%d b:%d\n",a,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Values after swapping: a:%d b:%d",a,b);
}