#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, sum;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    if (number >= 100 && number <= 999) {
        digit1 = number / 100;         
        digit2 = (number / 10) % 10;   
        digit3 = number % 10;          

        sum = digit1 + digit2 + digit3;

        printf("The sum of the digits is: %d\n", sum);
    } else {
        printf("The entered number is not a three-digit number.\n");
    }

    return 0;
}
