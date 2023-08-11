#include <stdio.h>
#include <stdbool.h>

int main(){


  //CHAR
  char x = 100; // HERE THE CHAR CAN STORE INT VALUE FROM -128 TO +127

  /*  You can either display the integer itself or the ascii interger to char converted CHARACTER.
      %c for Char
      %d for Integer
  */ 

  printf("x = %c\n",x);

  unsigned char y = 235; // HERE THE CHAR CAN STORE INT VALUE FROM 0 TO +255

  /*  Unsigned Char can be able to store the value of any integer from 0 TO +255
      It will not store any negative integers
      so the -128 will be 0 and the max limit will be extended till 255. 
  */
  
  printf("y = %d\n", y);

  //BOOLEAN
  bool z = true; // 1 = TRUE , 0 = FALSE
  //  bool can be able to store the True or False
  printf("BOOL = %d\n",z);

  //INTEGER
  int a = 5000;

  printf("a = %d\n", a);

  /*  Unsigned Integer can be able to store the value of any integer from 0 TO +4,294,967,295
      It will not store any negative integers
      so the -128 will be 0 and the max limit will be extended till 255. 
  */

  unsigned int b = 26143872;

  printf("b = %u\n", b);

  return 0;
}