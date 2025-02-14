#include <stdio.h>

int main() {
    int year;

    // Ask the user to input a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check whether the year is a leap year or not
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("Leap Year %d\n", year);
    } else {
        printf("Not a Leap Year %d\n", year);
    }

    return 0;
}
