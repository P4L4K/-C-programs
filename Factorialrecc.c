#include<stdio.h>
int fact(int n)
{
    if(n>1)
    {
        return n*fact(n-1);
    }
    else
    return 1;
}
void main()
{
    int n;
    printf("enter the positive number of which you wish to fing the factorial of :");
    scanf("%d",&n);
    printf("factorial is %d ",fact(n));
}