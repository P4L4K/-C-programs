// to check wether a given no is prime or not
#include<stdio.h>
void main()
{
    int i=1,n, c=0;
    printf("enter the no :");
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        if(n%i==0)
        c=c+1 ;
    }
    if (c==2)
    {
       printf("%d is a prime no",n);
    }
    else
      printf("%d is not a prime no",n);
}