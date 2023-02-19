#include<stdio.h>
#include<string.h>
void main()
{
char str1[20], str2[20] ,str3[20];
printf("Enter the first string : ") ;
gets(str1) ;
printf("\nEnter the second string : ") ;
gets(str2) ;
printf("\nString 1 = %s \n String 2 = %s\n", str1, str2) ;
//length of strings
printf("Length of string 1 = %d \n Length of string2 = %d\n", strlen(str1), strlen(str2)) ;
//uppercase and lowercase 
printf(" Uppercase  :\n string 1= %s \n string2= %s\n", strupr(str1), strupr(str2));
printf("Lowercase  : \n string 1= %s \n string2= %s\n", strlwr(str1), strlwr(str2));
//copying
strcpy(str3,strcat(str1,str2));
printf("String copy is : %s\n",str3);
//concatenation
printf("\nString 1 = %s \n String 2 = %s\n", str1, str2) ;
printf("Concatenation is : %s\n ", strcat(str1,str2));
//reversing
printf("Reverse :\n string 1= %s \n string2= %s \n", strrev(str1), strrev(str2)) ;
}

