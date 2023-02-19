#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    int maths;
    int physics;
    int english;
    int chemistry;
};
float totalmarks(int,int,int,int);
void main()
{
    int n,r,i;
    printf("enter the no of students:");
    scanf("%d",&n);
    struct student arr[n];
    printf("enter details of students:\n");
    for (i=0;i<n;i++)
    {
        printf("Enter roll no :");
        scanf("%d",&arr[i].rollno);
        printf("Enter student name :");
        scanf(" %s",&arr[i].name);
        printf("Enter marks in maths out of 100:");
        scanf("%d",&arr[i].maths);
        printf("Enter marks in physics out of 100 :");
        scanf(" %d",&arr[i].physics);
        printf("Enter marks in english out of 100 :");
        scanf(" %d",&arr[i].english);
        printf("Enter marks in chemistry out of 100:");
        scanf(" %d",&arr[i].chemistry);
    }
     
     printf("enter the rollno of the student, to see his/her total marks are :");
     scanf("%d",&r);
     for(i=0;i<n;i++)
   {    
    if(arr[i].rollno==r)
    {
        printf( "\ntotal percentage obtained by rollno %d  = %.2f %",r,totalmarks(arr[i].maths,arr[i].physics,arr[i].english,arr[i].chemistry));
    }
    }
}
float totalmarks(int a,int b,int c, int d)
{  float m=(a+b+c+d)/4.0;
  return m;
}