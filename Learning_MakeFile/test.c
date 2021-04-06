/**
 * @file test.c
 * @author Mihir Rajdeep
 * @brief 
 * @version 0.1
 * @date 2021-04-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

#include "fun.h"

int main() {
  /**
   * @Main File Component to test Makefile and header
   * 
   */
  int num1 = 10, num2=20, num3;
  num1 = 10;
  num2 = 20;
  num3 = sum(num1, num2);


  printf("Sum = %d \t", num3);
  return 0;
}