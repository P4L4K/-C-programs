#include<stdio.h>
int fibs(int n)
{
    static int a =0,b=1;
    int next;
   /* if(a<1)
    printf("%d,%d",a,b);*/
    if(n>0)
    {
    next =a+b;
    a=b;
    b=next;
    printf(",%d",next);
    fibs(n-1);}

}
void main()
{
    int n;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("0,1");
    fibs(n-2);
}