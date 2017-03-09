#include <stdio.h>

/* Returns the first location in the string s1 where any character from
   s2 occurs, returns -1 if s1 contains no characters from s2.
*/

int any(char s1[], char s2[]);

int main() {
  printf("%d\n",any("abc","aaa"));
  printf("%d\n",any("abc","bbb"));
  printf("%d\n",any("abc","ccc"));
  printf("%d\n",any("abc","ddd"));
}


int any(char s1[], char s2[]) {
  int i, j;
  for(i = 0; s1[i] != '\0'; i++) {
    for(j = 0; s2[j] != '\0'; j++) {
      if (s1[i] == s2[j]) {
        return i;
      }
    }
  }
  return -1;
}
