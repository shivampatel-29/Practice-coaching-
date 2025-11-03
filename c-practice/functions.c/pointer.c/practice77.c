#include<stdio.h>
int main()
{
    int a=25;
    int *x= &a;  //int* int kaa add store krta h
    int **y = &x;
    printf("%d\n",a);  // int** int* kaa add store krta h
    printf("%d\n",*x);  //%p se add print hota hai
    printf("%d\n",**y);
    printf("%p\n",&x);
    printf("%p\n",&y);
    printf("%p\n",&a);
}