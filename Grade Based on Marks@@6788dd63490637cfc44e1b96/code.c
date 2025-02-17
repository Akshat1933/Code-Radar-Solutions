#include <stdio.h>

int main() {
    int marks;

    // Get the marks from the user
    printf("Enter the marks (0 to 100): ");
    scanf("%d", &marks);

    // Check the marks and assign a grade
    if (marks >= 90 && marks <= 100) {
        printf("A\n");
    }
    else if (marks >= 80 && marks < 90) {
        printf("B\n");
    }
    else if (marks >= 70 && marks < 80) {
        printf("C\n");
    }
    else if (marks >= 60 && marks < 70) {
        printf("D\n");
    }
    else if (marks >= 50 && marks < 60) {
        printf("E\n");
    }
    else if (marks >= 0 && marks < 50) {
        printf("F\n");
    }
    else {
        // Handle invalid marks
        printf("Invalid marks entered!\n");
    }

    return 0;
}
