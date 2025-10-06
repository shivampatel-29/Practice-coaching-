#include<stdio.h>
int main()
{
    int n;
    printf("enter no. of rows: ");
    scanf("%d",&n);
    int nsp=1;
    int c=n;
    int nst=n;
    int m=n*2+1;
    for(int i=1;i<=m;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        //int a=1;
        for(int j=1;j<=nst;j++)
        {
            printf("%d",j);
            
        }
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
            
        }
        for(int l=c;l>=1;l--)
        {
            printf("%d",l);
        }
        c--;
        
        nst--;
        nsp+=2;
        printf("\n");
    }
}