#include <stdio.h>
int main()
{
    int number, assign, modulas, ans = 0;
    printf("Welcome to the Program.");
    printf("\nEnter a Number : ");
    scanf("%d", &number);
    assign = number;
    while (assign != 0){modulas = assign % 10; ans += modulas*modulas*modulas; assign /= 10;}
    if (ans == number) {printf("The Number is Armstrong.");}
    else {printf("The Number is not Armstrong.");}
}

/*
Here number is the input from the user as an int.
Assign is given value = number.
Now to find the cube of respective digits of the numbers we have to use modulas function.
Therefore modulas finds the respective digits and var ans finds the cube of them respectively and adds them.
assign /= 10 this removed the last digit from the assign var.
*/
