#include<stdio.h>
int main()
{
    int n,i,sum=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=1,b=1;

    for(i=1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
         printf("the fibonacci term is: %d\n",sum);
    }
   

}