#include <stdio.h>

int main(){

  int age;
  char name[25]; //bytes

  //input
  printf("What is your name?\n");
  //scanf("%s", &name); //takes only the first word as input
  fgets(name, 25, stdin); //for the whole line as input & will include new line

  printf("How old are you?\n");
  scanf("%d", &age);

  //output
  printf("Your name is %s", name);
  printf("You are %d years old!", age);
    
  return 0;
