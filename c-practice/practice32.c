#include<stdio.h>
int main()
{
    int n,num,r=0,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("reverse:%d",r);
    sum=num+r;
    printf("\nsum:%d",sum);
}