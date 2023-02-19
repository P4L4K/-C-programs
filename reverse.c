// wap to reverse the number 
#include<stdio.h>
void main()
{
   int n,rev=0;
   printf("enter the number :");
   scanf("%d",&n);
   while(n>0)
   {
    rev=rev*10 + (n%10);
    n=n/10 ;
   }
   printf("the reversed=%d",rev);
}