#include <stdio.h>
#define PI 3.14
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"
main ()
{
    printf(CYAN"\nWelcome to Our Program... !!"RESET);
    printf(CYAN"\nEnter the Radius of the Circle : "RESET);
    float radius , area;
    scanf("%f", &radius);
    area = radius * radius * PI;
    printf(CYAN"Area of Circle is : %.4f"RESET, area);
    return 0;
}
