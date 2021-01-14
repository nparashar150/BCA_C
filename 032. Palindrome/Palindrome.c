#include <stdio.h>
int main() {
    int n, fake = 0, remainder, main;
    printf("Enter an integer: ");
    scanf("%d", &n);
    main = n;
    for (;n != 0;) {
        remainder = n % 10;
        fake = fake * 10 + remainder;
        n /= 10;
    }
    if (main == fake)
        printf("%d is a palindrome.", main);
    else
        printf("%d is not a palindrome.", main);

    return 0;
}
