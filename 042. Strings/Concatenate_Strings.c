#include <stdio.h>
void main ()
{
  char s1[100] = "Naman ", s2[] = "Parashar";
  int length, j;
  printf("");
  puts(s1);
  printf("");
  puts(s2);
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  } // Line 7-9 is used to count the legnth of string s1 so that we can concatenate second string in first string.
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }  // Here we used the loop to concatenate all the values of second string until it ends and to check its end we use '\0' which means Null Character i.e. end of the string.
  printf("This is the Combination now : ");
  puts(s1);
  return 0;
}
