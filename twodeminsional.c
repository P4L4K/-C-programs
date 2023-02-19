//wap to read and print elements in 2d arrays
#include<stdio.h>
void main()
{
    int i,j,n,m;
    printf("enter no of rows : ");
    scanf("%d",&n);
    printf("enter no of columns :");
    scanf("%d",&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    { 
        for(j=0;j<m;j++)
        {
            printf("enter element array[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<n;i++)
    { 
        for(j=0;j<m;j++)
        {
            printf("\nelement array[%d][%d] = %d\n",i,j,arr[i][j]);
        
        }
    }
}