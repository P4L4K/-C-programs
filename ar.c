//calculating area and perimeter of a circle, rectangle & square
#include<STDIO.H>
void main() 
{
    float a,b,c,d,e,f,g,h,i,j,pi=3.14;
    // circle......................
    printf("value of pie taken is %f\n",pi);
    printf("enter radius of circle :");
    scanf("%f",&a);
    b=a*a*pi;    // calculating area
    c=2*pi*a;    // calculating perimeter 
    printf("area of circle = %f\nperimeter of circle =%f\n",b,c );
    // rectangle ....................
    printf("enter length of rectangle :");
    scanf("%f",&d);
    printf ("enter the breadth of rectangle :");
    scanf("%f",&e);
    f=d*e; //calculating area
    g=2*(d+e); // calculating perimeter
    printf("area of rectangle = %f\nperimeter of rectangel = %f\n",f,g);
    //square........................
    printf("enter side of square :");
    scanf("%f",&h);
    i=h*h; //calculating area
    j=4*h ; // calculating perimeter
    printf("area of square = %f\nperimeter of square = %f\n",i,j);
}