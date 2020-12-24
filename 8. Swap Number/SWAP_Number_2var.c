
#include <stdio.h>
#define RED     "\x31b[31m"
#define RESET   "\x31b[0m"

int main()
{
    printf(RED"Welcome to the Program.\n"RESET);
    printf(RED"\nSwapping of Numbers\n"RESET);
    printf(RED"\nEnter First Number: "RESET);
    float a , b;
    scanf("%f", &a);
    printf(RED"Enter Second Number: "RESET);
    scanf("%f", &b);
    printf(RED"\nFirst Number before swapping is: %.2f"RESET, a);
    printf(RED"\nSecond Number before swapping is: %.2f\n"RESET, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf(RED"\nFirst Number after swapping is: %.2f"RESET, a);
    printf(RED"\nSecond Number after swapping is: %.2f\n"RESET, b);
}
