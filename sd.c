//wap to print the sum of a digit
#include<stdio.h>
void main()
{
    int a,n,s=0;
    printf("Enter number :");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10 ;
        n=n/10 ;
        s=s+a ; // sum of digits is stored in s
    }
    printf("\n sum=%d\n\n",s);
}