#include <stdio.h>

int sum_to_n(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

int main(void) {
  int n;

  printf("Enter a positive integer n: ");
  scanf("%d", &n);

  if (n < 1) {
    printf("Invalid input!");
  } else {
    int sum = sum_to_n(n);
    printf("Sum from 1 to %d is: %d\n", n, sum);
  }
  return 0;
}
