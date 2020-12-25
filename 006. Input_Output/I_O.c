#include <stdio.h>
int main()
{
    int input; // Defining an Integer value to be asked as Input
    char achar[40]; // Defining a Char value to be asked as Input
    printf("Enter an Integer:"); // Printing
    scanf("%d", &input); // Taking input from user and giving its value to print
    printf("\nNumber is %d", input); // Printing user Input.
    printf("\nEnter a Character:"); // Printing
    scanf("%s", &achar); // Taking input from user and giving its value to print
    printf("\nCharacter is %s", achar); // Printing user Input.
    return 0;
}
