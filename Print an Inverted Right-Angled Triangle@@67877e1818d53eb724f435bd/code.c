#include <stdio.h>

int main() {
    int n;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop through each row
    for (int i = n; i >= 1; i--) {
        // Loop to print stars in each row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}







}