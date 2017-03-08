#include <stdio.h>

// Find the factorial of a number.
int main() {
  int i, n;
  unsigned long int ans = 1;
  printf("Enter a number: ");
  scanf("%d",&n);

  for (i = 1; i <= n; ++i) {
    ans = ans * i;
  }

  printf("The factorial of %d is %lu.\n", n, ans);
  return 0;
}
