#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first side: ");
    scanf("%d",&a);
    printf("Enter second side: ");
    scanf("%d",&b);
    printf("Enter third side: ");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b) 
    {
        printf("valid triangle");
    }
    else
    printf("invalid triangle");
}