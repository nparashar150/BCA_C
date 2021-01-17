#include <stdio.h>
int main() {
   int rows=5, i, j, alpha = 65;
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alpha);
         ++alpha;
      }
      printf("\n");
   }
   return 0;
}
