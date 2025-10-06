#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp= *x;
    *x= *y;
    *y=temp;
    return;
}

int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Values before swapping: a:%d b:%d\n",a,b);
    swap(&a,&b);
    printf("Values before swapping: a:%d b:%d\n",a,b);
}