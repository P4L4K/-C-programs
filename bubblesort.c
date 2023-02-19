#include<stdio.h>
void main()
{
    int i,j,t,n;
    printf("enter no of elements of your array = ");
    scanf("%d",&n);
    char ar[n];
for(i=0;i<n;i++)
{
printf("enter element ar[%d]=",i+1);
scanf(" %c",&ar[i]);
}
for(i=0;i<(n-1);i++)
    {
        for(j=0;j<((n-1)-i);j++)
        {
           if(ar[j]>ar[j+1])
           {
            t=ar[j+1];
            ar[j+1]=ar[j];
            ar[j]=t;
           }
        }
    }
/*printf("elements sorted in descending order:");
for(i=0;i<n;i++)
    {
        printf("ar[%d]=%c\n",i,ar[n-1-i]);
    }
*/
printf("elements sorted in ascending order:");
for(i=0;i<n;i++)
    {
        printf("ar[%d]=%c\n",i,ar[i]);
    }
}