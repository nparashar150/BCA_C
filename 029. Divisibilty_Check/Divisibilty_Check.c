#include <stdio.h>
int main ()
{
    printf("Welcome to the Program.");
    int number;
    printf("\nEnter a Number : ");
    scanf("%d", &number);
    if(number % 10 == 0){printf("It is divisible by 2 and 5 Both.");}
    else if (number % 2 == 0) {printf("It is divisible by 2 only.");}
    else if (number % 5 == 0) {printf("It is divisible by 5 only.");}
    else {printf("It is not divisible by 2 and 5.");}
    /*(number == 10) ? printf("Number is divisible by 2 and 5.") : (number == 2) ? printf("Number is divisible by 2.") : printf("Number is divisible by 5.");*/

//(a > b ? (a > c a:c): (b > c ? b:c));
}
