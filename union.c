#include <stdio.h>

//Defining a union 
union student {

int roll; float marks; char name[20];

}s; //Declaring union variable s with union definition

int main() {

// To Store Information using union
 printf("Enter information: \n");
 printf("Enter roll number: "); 
//s is a variable of Student type and roll is a member of Student
 scanf("%d", &s.roll); //Accessing Union Members 
printf(" student roll number: %d\n", s.roll); 
printf("Enter student name: ");
scanf("%s", &s.name); //Accessing Union Members // To display Information using Union
printf("student name= %s\n", s.name);
printf("Enter student marks: ");
scanf("%f", &s.marks); //Accessing Union Members // To display Information using Union
printf("students's marks= %.2f\n", s.marks);
 
  
 return 0;

}