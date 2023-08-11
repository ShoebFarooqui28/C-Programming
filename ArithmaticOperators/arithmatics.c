#include <stdio.h>

int main(){

  //Arithmetic Operators
 
    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ increment
    // -- decrement

  //ADDITION
  int g = 10;
  int h = 5;

  int j = g + h;

  printf("Answer = %d\n", j);

  //ADDITION
  int m = 30;
  int n = 10;

  int l = m - n;

  printf("Answer = %d\n", l);


  //DIVISION
  int a = 15;
  int b = 2;

  float c = a / (float)b; //here the variable b is converted from 2 to 2.000000

  printf("Answer = %.1f\n", c);

  //MODULUS
  int x = 5;
  int y = 2;

  int z = x % y; 

  printf("Answer = %.1d\n", z);
 
  //increment
  int o = 1;

  o++;

  printf("Answer = %d\n",o);

  //decrement
  int p = 5;

  p--;

  printf("Answer = %d", p);


  return 0;
}
