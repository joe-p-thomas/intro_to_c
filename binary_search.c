#include <stdio.h>

/*
Find the index of the target within the array using an iterative
binary search. If the target does not exist in the array, return -1.
*/
int binary_search(int a[], int n, int target);

int main() {
  int a[5] = {1,2,3,4,5};

  printf("%d\n", binary_search(a, 5, 1));
  printf("%d\n", binary_search(a, 5, 4));
  printf("%d\n", binary_search(a, 5, 0));
  printf("%d\n", binary_search(a, 5, 6));

}

int binary_search(int a[], int n, int target) {
  int low, high, mid;

  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (high - low) / 2 + low;
    if (a[mid] > target) {
      high = mid - 1;
    } else if (a[mid] < target) {
      low = mid + 1;
    } else {
      return mid;
    }
  }
  return -1;
}
