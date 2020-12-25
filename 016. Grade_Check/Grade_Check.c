#include <stdio.h>
#define CYAN "\x31b[36m"
#define RED "\x31b[31m"
#define RESET "\x31b[0m"
int main()
{
    printf(CYAN"Welcome to the Program.\n"RESET);
    return 0;
}
