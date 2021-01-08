#include <stdio.h>
int main()
{
    char vowel;
    printf("Welcome to the Program.\n");
    printf("Enter a Vowel : ");
    scanf("%c", &vowel);
    switch (vowel) {
    case 65 :
    case 69 :
    case 73 :
    case 79 :
    case 85 :
    case 97 :
    case 101 :
    case 105 :
    case 111 :
    case 117 :
    printf("It is a Vowel.");
    break;
    default :
   printf("It is not a Vowel.");
    break;}
}
