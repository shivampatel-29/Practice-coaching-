#include<stdio.h>
int main()
{
    int n,ld=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
         ld=ld*10;
         ld=ld+(n%10);
        n=n/10;
    }
    printf("reverse digits are %d",ld);
}