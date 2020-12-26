#include <stdio.h>
int main()
{
    printf("Welcome to the Program.\n");
    int array[3];
    int array_b[3];
    int array_c[3];
    printf("Enter the Values of First Row : ");
    for (int a = 0; a < 3; ++a) {
        scanf("%d", &array[a]);
    }
    printf("Enter the Values of Second Row : ");
    for (int b = 0; b < 3; ++b) {
        scanf("%d", &array_b[b]);
    }
    printf("Enter the Values of Third Row : ");
    for (int c = 0; c < 3; ++c) {
        scanf("%d", &array_c[c]);
    }
    for (int a = 0; a < 3; ++a) {
        printf("%d\t", array[a]);
    }
    printf("\n");
    for (int b = 0; b < 3; ++b) {
        printf("%d\t", array_b[b]);
    }
    printf("\n");
    for (int c = 0; c < 3; ++c) {
        printf("%d\t", array_c[c]);
    }
    printf("\n");
    return 0;
}

