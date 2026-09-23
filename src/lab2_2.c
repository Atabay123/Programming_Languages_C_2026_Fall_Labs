#include <stdio.h>


long long factorial(int n) {
  long long result = 1;
  for (int i = n; i >= 1; i--) {
    result *= i;
  }
  return result;
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("Invalid input!");
  } else {
    long long result = factorial(n);
    printf("Factorial of %d is: %lld\n", n, result);
  }
  
  return 0;
}
