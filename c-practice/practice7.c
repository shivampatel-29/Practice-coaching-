#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    if(i>0)
    printf("%d",i);
    else
    {
       i=i*(-1);
        printf("%d",i);
    }
}