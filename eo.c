// TO CHECK WETHER THE GIVEN NUMBER IS EVEN OR ODD
#include<stdio.h>
void main()
{
  int a;
  printf("enter the no : ");
  scanf ("%d",&a);
  if(a%2!=0)
  {
     printf("%d is an odd number ",a);
  }
  else
  { 
    printf("%d is an even number",a);
  }
}