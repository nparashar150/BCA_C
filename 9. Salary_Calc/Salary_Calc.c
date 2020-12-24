#include <stdio.h>
#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"
int main()
{
    printf(GREEN"Welcome to the Program.\n"RESET);
    printf(GREEN"Program to Calculate Salary of Person.\n"RESET);
    printf(GREEN"\nEnter the Basic Salary:");
    float salary , basic , dearness , rent ;
    scanf("%f", &basic);
    dearness = ((float)basic / 5) * 2;
    rent = (float)basic / 5;
    salary = dearness + rent + basic;
    printf("\nSalary after Calculation is: %f", salary);
}
