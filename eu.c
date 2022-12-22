// calculating euclidian distance between 2 points
// formula used , d=[(x2-x1)^2 +(y2-y1)^2]^(1/2)
#include<stdio.h>
#include<MATH.H>
void main()
{
    float a,b,a1,b1,d;
    printf("enter x coordinate of first point : ");
    scanf("%f",&a);
    printf("enter y coordinate of first point :");
    scanf("%f",&b);
    printf("enter x coordinate of second point :");
    scanf("%f",&a1);
    printf("enter y coordinate of second point :");
    scanf("%f",&b1);
    //printf("first point : %.2f & %.2f\n",a,b);
    //printf("second point : %f & %f\n",a1,b1);
    d= pow(pow(a1-a,2) + pow(b1-b,2),1/2.0); 
    printf("euclidean distance =%f ",d);
}