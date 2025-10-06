#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Values before swapping: a:%d b:%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Values before swapping: a:%d b:%d\n",a,b);

}