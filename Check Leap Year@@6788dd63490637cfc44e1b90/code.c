#include <stdio.h>

int main() {
    int year;

    // Ask the user to input a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check whether the year is a leap year or not
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
