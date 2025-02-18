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
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            
            }
            break;
        
    }

    return 0;
}
