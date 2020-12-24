#include <stdio.h>
#define RED     "\x31b[31m"
#define RESET   "\x31b[0m"

int main()
{
    printf(RED"Welcome to the Program.\n"RESET);
    printf(RED"\nSwapping of Numbers\n"RESET);
    float a , b , c;
    printf(RED"\nEnter First Number: "RESET);
    scanf("%f", &a);
    printf(RED"\nEnter Second Number: "RESET);
    scanf("%f", &b);
    c = b;
    b = a;
    a = c;
    printf(RED"\nFirst Number after swapping is: %.2f"RESET, a);
    printf(RED"\nSecond Number after swapping is: %.2f"RESET, b);
}
