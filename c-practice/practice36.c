#include<stdio.h>
int main()
{
    int power=1,a,b;
    printf("enter base: ");
    scanf("%d",&a);
    printf("Enter power: ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        power=power*a;
    }
    printf("%d",power);
}