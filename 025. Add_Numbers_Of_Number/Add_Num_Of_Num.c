#include <stdio.h>
int main()
{
    int number, remainder=0, sum=0, temp;
    printf("\t\t\t  Enter the Number: ");
    scanf("%d", &number);
    temp = number;
    while(number>0)
    {
        remainder = number%10;
        sum = sum+remainder;
        number = number/10;
    }
    printf("\t\t  Sum of all digit along with number = %d", sum);
    return 0;
}
