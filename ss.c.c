#include <stdio.h>

int main() {
    double num1, num2;
    int choice;

    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers:\n");
    scanf("%lf %lf", &num1, &num2);

    switch (choice) {
        case 1:
            printf("Result of addition: %.2lf\n", num1 + num2);
            break;
        case 2:
            printf("Result of subtraction: %.2lf\n", num1 - num2);
            break;
        case 3:
            printf("Result of multiplication: %.2lf\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Result of division: %.2lf\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
