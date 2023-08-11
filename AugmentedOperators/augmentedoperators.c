#include <stdio.h>

int main(){

  //ADDITION
  int x = 1;
  x+=2; 
  printf("Answer = %d\n", x);

  //SUBTRACTION
  int y = 2;
  y-=1; 
  printf("Answer = %d\n", y);
 
  //DIVISION
  float z = 5;
  z/=2;
  printf("Answer = %.1f\n", z);

  //MODULUS
  int a = 10;
  a%=3;
  printf("Answer = %d\n", a);
  
  return 0;
}
