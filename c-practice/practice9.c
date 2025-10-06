#include<stdio.h>
int main()
{
    int l,b,a,p;
    printf("Enter length: ");
    scanf("%d",&l);
    printf("Enter breadth: ");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    if(a>p)
    printf("a is greater than p");
    else if(a<p)
    printf("p is greater than a");
    else
    printf("both are same");
}