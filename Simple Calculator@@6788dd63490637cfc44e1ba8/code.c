// Your code here...
#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    scanf("%c", &operator);
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            printf("%lf + %lf = %lf\n", num1, num2, num1 + num2);
            
        case '-':
            printf("%lf - %lf = %lf\n", num1, num2, num1 - num2);
            
        case '*':
            printf("%lf * %lf = %lf\n", num1, num2, num1 * num2);
            
        case '/':
            if (num2 != 0) {
                printf("%lf / %lf = %lf\n", num1, num2, num1 / num2);
            } 
            else {
                printf("Error! Division by zero.\n");
            }
            break;
        
    }

    return 0;
}
