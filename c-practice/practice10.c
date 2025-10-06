#include<stdio.h>
int main()
{
    int i;
    printf("enter a num: ");
    scanf("%d",&i);
    if(i>99 && i<1000)
    {
    printf("it is a three digit num");
    }
    else
    {
    printf("it is not a three digit num");
    }
    return 0;
}    
