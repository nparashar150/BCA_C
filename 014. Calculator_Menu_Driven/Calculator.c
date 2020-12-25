#include <stdio.h>
#include <stdlib.h>
#define PURPLE "\x31b[35m"
#define RED "\x31b[31m"
#define RESET "\x31b[0m"
int main()
{
    printf(PURPLE"Welcome to the Program.\n"RESET);
    printf(PURPLE"This is a Basic Calculator.\n"RESET);
    float ans;
    int choose;
    printf(PURPLE"1. Addition\n"RESET);
    printf(PURPLE"2. Substraction\n"RESET);
    printf(PURPLE"3. Multiplication\n"RESET);
    printf(PURPLE"4. Division\n"RESET);
    printf(PURPLE"5. Exit\n"RESET);
    printf(PURPLE"Enter any one Option : "RESET);
    scanf("%d", &choose);
    switch (choose) {
        case 1: {
            printf(PURPLE"Enter the First Number : "RESET);
            float num1, num2, sum;
            scanf("%f", &num1);
            printf(PURPLE"Enter the Second Number : "RESET);
            scanf("%f", &num2);
            sum = num1 + num2;
            printf(PURPLE"Adding them we get : %.2f"RESET, sum);
            break;
        }
        case 2: {
            printf(PURPLE"Enter the First Number : "RESET);
            float num1, num2, sum;
            scanf("%f", &num1);
            printf(PURPLE"Enter the Second Number : "RESET);
            scanf("%f", &num2);
            sum = num1 - num2;
            printf(PURPLE"Adding them we get : %.2f"RESET, sum);
            break;
        }
        case 3: {
            printf(PURPLE"Enter the First Number : "RESET);
            float num1, num2, sum;
            scanf("%f", &num1);
            printf(PURPLE"Enter the Second Number : "RESET);
            scanf("%f", &num2);
            sum = num1 * num2;
            printf(PURPLE"Adding them we get : %.2f"RESET, sum);
            break;
        }
        case 4: {
            printf(PURPLE"Enter the First Number : "RESET);
            float num1, num2, sum;
            scanf("%f", &num1);
            printf(PURPLE"Enter the Second Number : "RESET);
            scanf("%f", &num2);
            sum = num1 / num2;
            printf(PURPLE"Adding them we get : %.2f"RESET, sum);
            break;
        }
        case 5: {
            printf(PURPLE"Exiting."RESET);
            exit (0);
            break;
        }
        default: {
            printf(RED"Enter appropriate value."RESET);
        }
    }

    return 0;
}
