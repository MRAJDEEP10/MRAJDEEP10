#include <stdio.h>

#include "fun.h"

int main() {
  int num1 = 10, num2=20, num3;
  num1 = 10;
  num2 = 20;
  num3 = sum(num1, num2);


  printf("Sum = %d \t", num3);
  return 0;
}