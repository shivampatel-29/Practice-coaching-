#include<stdio.h>
int main()
{
    int n;
    n=4;
    int m=n*2-1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i==1 || i==m || j==1 || j==m)
            {
                printf("%d",n);
            }
            else if(i==2 || i==m-1 || j==2 || j==m-1)
            {
                printf("%d",n-1);
            }
            else if(i==3 || i==m-2 || j==3 || j==m-2)
            {
                printf("%d",n-2);
            }
            else if(i==4 || i==m-3 || j==4 || j==m-3)
            {
                printf("%d",n-3);
            }

            else
            printf(" ");
            
        }
        printf("\n");
    }
}