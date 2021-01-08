#include <stdio.h>
int main()
{
    int a, sum;
    printf("Welcome to the Program.");
    printf("\nEnter a Number : ");
    while (1) {
    scanf("%d", &a);
    sum += a;
    if (a == NULL) { break; }
    printf("%d", sum); }
}
