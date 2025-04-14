#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    if (number >= 100 && number <= 999) {
        digit1 = number / 100;        
        digit2 = (number / 10) % 10;   
        digit3 = number % 10;          

        if (digit1 == digit3) {
            printf("The number is a palindrome.\n");
        } else {
            printf("The number is not a palindrome.\n");
        }
    } else {
        printf("The entered number is not a three-digit number.\n");
    }

    return 0;
}
