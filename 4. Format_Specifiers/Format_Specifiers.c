#include <stdio.h>
void main ()
{
    char ch = 'N'; // Assigning value to char 'ch' as N.
    printf("%c\n", ch); //Printing the character '"%c" is used for character.'

    int a = 40, b = 45; // Assigning value to integer a && b.
    printf("%d\n", a); //Printing Signed Integer by usinf "%d".
    printf("%d\n", b); //Printing Signed Integer by usinf "%d".

    float f = 98.212; // Assigning value to float 'f' as 98.212.
    printf("%f\n", f); // Printing float value as float 'f'.
    printf("%e\n", f); // Printing float value as scientific notation.

    int c = 56; // Assigning value to integer c.
    printf("%o\n", c); // Printing integer as Octal Form.
    printf ("%x\n", c); // Printing integer as Hexadecimal Form.

    char string[] = "Hello World"; // Assigning value to character 'string'.
    printf("%s\n", string); // Printing string value.

    printf("ASCII Value of capitalised character 'A'=%d\n", 'A'); // Finding ASCII Value of the Character.
    printf("ASCII Value of capitalised character 'Z'=%d\n", 'Z'); // Finding ASCII Value of the Character.
    printf("ASCII Value of small character 'a'=%d\n", 'a'); // Finding ASCII Value of the Character.
    printf("ASCII Value of small character 'z'=%d\n", 'z'); // Finding ASCII Value of the Character.

    printf("ASCII value of Integer Value 50 is : %c\n",50); // Finding ASCII Value of Integer.
    printf("ASCII value of New Line '\\n' is : %d",'\n'); // Finding ASCII Value of Escape Sequence.
    printf("%cPrinting in new line %cwithout Esacpe Sequence",10,10); // Printing in new line without escape values.
    printf("%cPrinting in new line %cwithout Esacpe Sequence",10,9); // Printing in tab without escape values.

    return 0;
}
