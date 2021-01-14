  #include <stdio.h>
  int main() {
        int num, largest = 0, rem = 0;
        // defining a var large and remainder and their values are 0
        printf("Enter your input value:");
        scanf("%d", &num);
        for (;num > 0;) {
                rem = num % 10;
                                                    //remainder = value when giving mod of  number so that we get the digits
                if (rem > largest) {              //as we know large is 0 and we have assigned rem respective values of digits above
                        largest = rem;                // so largest digit of number in remainder comes to largest
                }
                num = num / 10;
        }
        printf("Largest digit of the number is %d\n", largest);
        return 0;
  }
