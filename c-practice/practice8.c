#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter cost price: ");
    scanf("%d",&cp);
    printf("Enter selling price: ");
    scanf("%d",&sp);
    int diff=sp-cp;
    if(diff>=0)
    printf("profit of %d",diff);
    else
    printf("loss of %d",diff);
}