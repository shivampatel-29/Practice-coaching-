#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
    int a,b;
    printf("Enter num: ");
    scanf("%d",&a);
    printf("Enter num: ");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("The sum is: %d",sum);
}