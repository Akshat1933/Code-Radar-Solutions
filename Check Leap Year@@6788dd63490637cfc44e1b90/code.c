#include <stdio.h>

int main() {
    int year;

    // Ask the user for input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d Leap Year %d\n", year);
    } else {
        printf("%d Not a Leap Year \n", year);
    }

    return 0;
}

