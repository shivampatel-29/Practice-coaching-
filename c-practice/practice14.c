#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5==0)
    {
        if(n%3==0)
        {
          printf("It is div by 5 &3");
        }
        else
         printf("It is not div by 5 &3");
    }
    else
     printf("It is not div by 5 &3");
}