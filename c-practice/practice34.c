#include<stdio.h>
int main()
{
    int n,i,prod=1;
    printf("Enter a num : ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        prod=prod*i;
       
    }
     printf("Factorial is: %d\n",prod);

    
}