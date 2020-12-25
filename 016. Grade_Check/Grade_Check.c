#include <stdio.h>
#define CYAN "\x31b[36m"
#define RED "\x31b[31m"
#define RESET "\x31b[0m"
int main()
{
    printf(CYAN"Welcome to the Program.\n"RESET);
    float a, b, c, d, e;
    printf(CYAN"Enter the Marks of Subjects.\n"RESET);
    printf(CYAN"1.  A    :   "RESET);
    scanf("%f", &a);
    printf(CYAN"\n2.  B    :   "RESET);
    scanf("%f", &b);
    printf(CYAN"\n3.  C    :   "RESET);
    scanf("%f", &c);
    printf(CYAN"\n4.  D    :   "RESET);
    scanf("%f", &d);
    printf(CYAN"\n5.  E    :   "RESET);
    scanf("%f", &e);
    if (a >= 70)
    {
        printf("\nYou have got First Grade in \"A\" Subject.");
    }else if (a >= 50)
    {
        printf("\nYou have got Second Grade in \"A\" Subject.");
    }else if (a >= 40)
    {
        printf("\nYou have got Third Grade in \"A\" Subject.");
    }else{
        printf("\nYou have Failed in \"A\" Subject.");
    }
    if (b >= 70)
    {
        printf("\nYou have got First Grade in \"B\" Subject.");
    }else if (a >= 50)
    {
        printf("\nYou have got Second Grade in \"B\" Subject.");
    }else if (a >= 40)
    {
        printf("\nYou have got Third Grade in \"B\" Subject.");
    }else{
        printf("\nYou have Failed in \"B\" Subject.");
    }
    if (c >= 70)
    {
        printf("\nYou have got First Grade in \"C\" Subject.");
    }else if (c >= 50)
    {
        printf("\nYou have got Second Grade in \"C\" Subject.");
    }else if (c >= 40)
    {
        printf("\nYou have got Third Grade in \"C\" Subject.");
    }else{
        printf("\nYou have Failed in \"C\" Subject.");
    }
    if (d >= 70)
    {
        printf("\nYou have got First Grade in \"D\" Subject.");
    }else if (d >= 50)
    {
        printf("\nYou have got Second Grade in \"D\" Subject.");
    }else if (d >= 40)
    {
        printf("\nYou have got Third Grade in \"D\" Subject.");
    }else{
        printf("\nYou have Failed in \"D\" Subject.");
    }
    if (e >= 70)
    {
        printf("\nYou have got First Grade in \"E\" Subject.");
    }else if (e >= 50)
    {
        printf("\nYou have got Second Grade in \"E\" Subject.");
    }else if (e >= 40)
    {
        printf("\nYou have got Third Grade in \"E\" Subject.");
    }else{
        printf("\nYou have Failed in \"E\" Subject.");
    }
    return 0;
}
