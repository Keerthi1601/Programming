#include <stdio.h>
#include <stdint.h>

int main()
{

  int num1 = 43;
  int num2 = 34;

  printf("Before Swaping:\n");
  printf("Num1 = %d, Num2 = %d\n",num1,num2);

  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;



  printf("After Swaping:\n");
  printf("Num1 = %d, Num2 = %d\n",num1,num2);

}

