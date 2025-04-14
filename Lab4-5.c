#include <stdio.h>

int main() {
    int birth_year, current_year, age;

    printf("Enter your birth year: ");
    scanf("%d", &birth_year);

    current_year = 2025;

    age = current_year - birth_year;

    if (age >= 0) {
        printf("Your age is: %d years\n", age);
    } else {
        printf("Invalid birth year entered.\n");
    }

    return 0;
}
