#include <math.h>
#include <stdio.h>

int main() {
  int n = 999;
  double result = log10(n) + 1;
  printf("Number of digits in %d is %d\n", n, (int)result);
  return 0;
}
