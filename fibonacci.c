#include <stdio.h>

// Find the Nth Fibonacci number recursively.
int fibonacci(int n);

int main() {
  int n, ans;

  printf("Enter a number: ");
  scanf("%d",&n);

  ans = fibonacci(n);
  printf("%d\n",ans);

  return 0;
}

int fibonacci(int n) {
  if (n <= 2) {
    return 1;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}
