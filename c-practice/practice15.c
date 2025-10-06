#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0)
    {
        if(n%15!=0)
        {
            printf("no. is div. by 5 or 3 but not 15");
        }
        else
        {
             printf("no. is div. by 5 or 3 and 15 also");
        }
    }
    else
     printf("It is not div by 5 or 3");
}