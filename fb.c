// wap  to print fibonacci series
#include<stdio.h>
main()
{
int a=0,b=1,c,n,i=0;
printf("enter the no of terms to be printed:");
scanf("%d",&n);
printf("%d, %d",a,b);
for(i=2;i<n;i++)
{
  c=a+b;
  printf(", %d ",c);
  a=b;
  b=c ; 
}
}