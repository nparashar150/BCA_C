#include <stdio.h>
int main()
{
    char vowel;
    printf("Welcome to the Program.");
    printf("\nEnter a Vowel : ");
    scanf("%c", &vowel);
    if ((vowel == 65) || (vowel == 69 ) || (vowel == 73 )|| (vowel == 79) || (vowel == 85))
    { printf("\nIt is a Vowel."); }
    else if ((vowel == 97) || (vowel == 101) || (vowel == 105) || (vowel == 111) || (vowel == 117))
    { printf("\nIt is a vowel."); }
    else
    { printf("It is not a vowel");}
}
