#include<stdio.h>
int main()
{
    int n;
    printf("enter no. of rows: ");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    int b=(n*2)+1;
    for(int a=1;a<=b;a++)
        {
            printf("*");
        }
        printf("\n");

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nst;j++)
        {
            printf("*");
        }
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        nsp=nsp+2;
        for(int l=1;l<=nst;l++)
        {
            printf("*");
        }
        nst--;
        
        printf("\n");
    }
}
