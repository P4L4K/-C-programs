// PROGRAM TO ENTER different digits AND DISPLAY THE GREATEST digit ENTERED
#include<stdio.h>
void main()
{
    int a,m=0,d,i,c=1;
    printf("enter the no of digits to be enterd :");
    scanf("%d",&a);
    for(i=0;i<a;i++ )
    { printf("ENTER THE DIGIT %d : ",c);
      scanf("%d",&d);
      if(d>m)
      { m=d;}
       c++;
    }
    printf("maximum digit is = %d",m);
}
