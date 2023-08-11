#include <stdio.h>

int main(){

  int age = 21; // INTEGER

  float gpa = 5.7; // DECIMAL NUMBER

  char grade = 'C'; // SINGLE CHARACTER

  char name[] = "Shoeb"; // ARRAY OF CHARACTER OR STRING

  printf("Hello I'm %s\n",name); // HERE "%s" IS USED AS A PLACEHOLDER FOR THE VALUE OF NAME
  printf("I'm are %d years old\n",age); // HERE "%d" IS USED AS A PLACEHOLDER FOR THE VALUE OF AGE
  printf("My average grade is %c\n", grade); // HERE "%c" IS USED AS A PLACEHOLDER FOR THE VALUE OF GRADE
  printf("My GPA is %f",gpa); // HERE "%f" IS USED AS A PLACEHOLDER FOR THE VALUE OF GPA

  return 0;
}