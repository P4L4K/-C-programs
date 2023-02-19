//wap to enter the elements of an array and print the max element and its index.
#include<stdio.h>
void main()
{ 
    int n,element,i=0,max=0,l=0;
    printf("enter the no of element you want to enter :");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        printf("enter element no %d =",i+1);
        scanf("%d",&array[i]);
    }
    for (i=0;i<n;i++)
    {
      if (array[i]>=max)
      {
        max=array[i];
        l=i;
      }
    }
    printf(" \n\nmax no is =%d",max);
    printf("\nindex of max no is =%d",l);
}