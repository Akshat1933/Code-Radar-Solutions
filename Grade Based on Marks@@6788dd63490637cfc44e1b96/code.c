#include <stdio.h>

int main() {
    int marks;

    // Get the marks from the user
    printf("Enter the marks (0 to 100): ");
    scanf("%d", &marks);

    // Check the marks and assign a grade
    if (marks >= 90 && marks <= 100) {
        printf("Grade: A\n");
    }
    else if (marks >= 80 && marks < 90) {
        printf("Grade: B\n");
    }
    else if (marks >= 70 && marks < 80) {
        printf("Grade: C\n");
    }
    else if (marks >= 60 && marks < 70) {
        printf("Grade: D\n");
    }
    else if (marks >= 50 && marks < 60) {
        printf("Grade: E\n");
    }
    else if (marks >= 0 && marks < 50) {
        printf("Grade: F\n");
    }
    else {
        // Handle invalid marks
        printf("Invalid marks entered!\n");
    }

    return 0;
}
