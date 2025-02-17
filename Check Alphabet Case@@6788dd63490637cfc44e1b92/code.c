#include <stdio.h>
#include <ctype.h> // For toupper() and tolower()

int main() {
    char ch;

    // Ask the user to input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is alphabetic before converting
    if (isalpha(ch)) {
        // Convert to uppercase
        char upper = toupper(ch);
        // Convert to lowercase
        char lower = tolower(ch);

        // Display the results
        printf("Uppercase: %c\n", upper);
        printf("Lowercase: %c\n", lower);
    } else {
        printf("Please enter an alphabetic character.\n");
    }

    return 0;
}

