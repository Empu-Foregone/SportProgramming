#include <stdio.h>

int main() {
    int original_price = 450; 
    int discount_percentage = 15; 
    int discounted_price;

    discounted_price = original_price * (100 - discount_percentage) / 100;

    printf("The discounted price is: %d UAH\n", discounted_price);

    return 0;
}
