#include <stdio.h>

int main() {
    float price, discount_percentage, final_price;

    printf("Enter the price of the item: ");
    scanf("%f", &price);

    printf("Enter the discount percentage: ");
    scanf("%f", &discount_percentage);

    final_price = price * (100 - discount_percentage) / 100;

    printf("The final price after discount is: %.2f\n", final_price);

    return 0;
}
