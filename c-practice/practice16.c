#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first no.: ");
    scanf("%d",&a);
    printf("Enter second no.: ");
    scanf("%d",&b);
    printf("Enter third no.: ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is greatest",a);
        }
        else
        printf("%d is greatest",c);
    }
    else 
    {
        if(b>c)
        printf("%d is greatest",b);
        else
        printf("%d is greatest",c);
    }
}    