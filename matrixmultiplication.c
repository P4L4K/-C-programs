//multiplication of 2d arrays...................
#include<stdio.h>
void main()
{   int r,c,rr,cc;
printf("enter no of rows in a ; ");
scanf("%d",&r);
printf("enter no of column in a ; ");
scanf("%d",&c);
printf("enter no of column in b ; ");
scanf("%d",&cc);
printf("enter no of rows in b ; ");
scanf("%d",&rr);
    int a[r][c];
    int b[rr][cc];
    int d[r][cc];
    int i,j,k;
    for(i=0;i<r;i++)
    {   printf("\nenter elements  in row %d of a ",i+1);
        for(j=0;j<c;j++)
        {   printf("a%d%d :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rr;i++)
    {   printf("\nenter elements  in row %d of b ",i+1);
        for(j=0;j<cc;j++)
        {printf("b%d%d :",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    { 
        for(j=0;j<cc;j++)
        {
            d[i][j]=0;
        }
    }
    if (c==rr)
    {printf("matrix obtained after multiplication :\n");
    //i== no of row of a
    // j= no of row of b and column of a
    // k=no of column of b
    for(i=0;i<r;i++)
    {
        for(j=0;j<cc;j++)
        {    
            for(k=0;k<c;k++)
            {
               d[i][j] +=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<cc;j++)
        printf("%d  ",d[i][j]);
        printf("\n");
    }
    }
    else{
        printf("multiplication not possible");
    }
}