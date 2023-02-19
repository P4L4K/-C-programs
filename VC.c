///to check wether the alphabet is vowel or consonant
#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("enter the alphabet :");
    scanf("%c",&a);
    printf("a=%c\n",a);
    //if (( a>='A' && a<='Z') || (a>='a' && a<='z'))
    if((a>=65 && a<=90)||(a>=97 && a<=122))
    {
        if (a=='a' || a=='A' || a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
        printf("%c is a vowel",a);
        else
        printf("%c is a consonant",a);
    }
    else
    printf("Invalid input......"); //input is not an alphabet
}
// using ctype header file.......
void vowels()
{
    char a;
    printf("enter the alphabet : ");
    scanf("%c",&a);
    printf("a=%c\n",a);
    if(isalpha(a))
    {
    if(a=='i'|| a== 'e' || a== 'a' || a=='o' || a=='u'|| a=='U' || a=='A' || a=='E' || a== 'I' || a== 'O')
    {
            printf("%c is a vowel",a);
    }
    else
    { printf("%c is a consonant",a);}
    }
    else 
    {
        printf("\ninvalid input......");
    }

}