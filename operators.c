//add, subtract, multiply, divide with user input
#include<stdio.h>
void main()
{
// with user input.............................
  int a,b,c,d,e,f;
    printf("Enter first number :");
    scanf("%d",& a);
    printf("Enter second number :");
    scanf("%d",& b);
    c=a+b; // calculating 
    d = b-a; //calculating subtraction
    e= a*b; // calculating multiplication
    f= a/b; // calculating division
    printf("sum : %d \n",c);
    printf("subtraction : %d \n",d);
    printf("multiplication : %d \n",e);
    printf("division : %d",f);
    
}
// add without user input.......................................
void ADD()
{int a,b,c;
    a=5;
    b=6;
    c=a+b; // calculating sum 
    printf("Sum : %d",c);}