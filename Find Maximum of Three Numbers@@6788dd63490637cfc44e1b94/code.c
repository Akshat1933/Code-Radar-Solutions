#include <stdio.h>

int main() {
    // Declare variables to store the three numbers
    int num1, num2, num3;

    // Take input from the user
    
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare the numbers and find the maximum
    if (num1 >= num2 && num1 >= num3) {
        printf("%d\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("%d\n", num2);
    }
    else {
        printf("%d\n", num3);
    }

    return 0;
}

    
        
        

    
    
 