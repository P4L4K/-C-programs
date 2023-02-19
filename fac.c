//to print factorial of a no.
#include<stdio.h>
void main()
{
    int n,i,f=1;
    printf("Enter the no : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        f=i*f;
    }
    printf("factorial of %d = %d",n,f);
}