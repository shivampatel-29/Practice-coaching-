#include<stdio.h>
int main()
{
    int n;
    printf("enter no. of rows: ");
    scanf("%d",&n);
    int min=0;
    int m=(2*n)-1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int a=i;
            if(i>n)
            {
                a=2*n-i;
            }
            int b=j;
            if(b>n)
            {
                b=2*n-j;
            }
            if(a<b)
            min=a;
            else
            min=b;
            printf("%d",min);
        }
        printf("\n");
    }
}
    