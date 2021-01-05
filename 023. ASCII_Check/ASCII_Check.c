#include <stdio.h>
int main ()
{
    char inp;
    printf("Welcome to the Program");
    printf("\nEnter the Char/Num/Symbol : ");
    scanf("%c", &inp);
    if((inp >= 97 && inp <= 122) || (inp >= 65 && inp <= 90))
       printf("\nThe entered character %c is an Alphabet",inp);
       if (inp >= 97 && inp <= 122)
       {
        printf("\nThe entered Alphabet : %c is Small.",inp);
       }
        else if (inp >= 65 && inp <= 90)
       {
        printf("\nThe entered Alphabet : %c is Capitalised.",inp);
       }
    else if ((inp >=32 && inp <= 47) || (inp >=58 && inp <= 64) || (inp >= 91  && inp <= 96) || (inp >= 123 && inp <= 126))
    {
       printf("\nThe entered character : %c is a Special Character.",inp);
    }
    else
    {
        printf("\nThe entered character : %c is a Number.", inp);
    }
    return 0;
}
