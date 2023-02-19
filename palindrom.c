#include<stdio.h>
int palindrome();
main()
{
// method 1:
    int n=0;
    printf("enter the length of string : ");
    scanf("%d",&n);
    char string[n];
    printf("enter the string :");
    scanf("%s",&string);
    int c=0;
    for(int i=0;i<n;i++)
    {
       if( string[i]!=string[n-1])
        {
        c+=1;
        break;
        }
        n=n-1;
    }
    if(c==0)
    {
        printf("it is a palindrom");
    }
    else{
        printf("it is not a palindrom");
    }


//method 2:
   /* if(palindrome())
    {
        printf("it is a palindrom");
    }
    else{
        printf("it is not a palindrom");
    }
    */
}
int palindrome()
{
    int n=0;
    printf("enter the length of string : ");
    scanf("%d",&n);
    char string[n];
    printf("enter the string :");
    scanf("%s",&string);
    for(int i=0;i<n;i++)
    {   
       if( string[i]!=string[n-1])
        { 
        return 0;
        }
        n=n-1;
    }
    return 1;
    
}