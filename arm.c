//to check wether the given no is armstrong no or not 
#include "stdio.h"
void main()
{
    int n, sum=0,r,d;
    printf("enter the number :");
    scanf("%d",&n);
    d=n;
    while(n>0)
    {
        r=n%10 ;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==d)
    {
        printf("%d is an armstrong number",d);
    }
    else
    printf("%d is not an armstrong number",d);
} 