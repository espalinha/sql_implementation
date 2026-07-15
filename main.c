#include <stdio.h>
#include "TypeInterface.h"
#include "Integer.h"
#include "algorithms.h"

int main() {
  int a = 10;
  int b = 6;

  print_the_smaller(&a, &b, &Integer);
  printf("\n");
  return 0;
}
