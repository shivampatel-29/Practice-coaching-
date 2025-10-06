#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    if(i%5==0)
    printf("number is div. by 5");
    else
    printf("number is not div by 5");
}