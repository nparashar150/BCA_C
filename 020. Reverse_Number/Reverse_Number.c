#include <stdio.h>
#define RED "\x31b[31m"
#define RESET "\x31b[0m"
int main() {
    int num, rev = 0, remainder;
    printf(RED"Welcome to the Program.\n"RESET);
    printf(RED"Enter an integer: "RESET);
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }
    printf(RED"Reversed number : %d"RESET, rev);
    return 0;
}
