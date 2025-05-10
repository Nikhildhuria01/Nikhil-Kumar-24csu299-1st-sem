#include <stdio.h>
#include <math.h> 

int addition() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a + b);
}

int subtraction() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a - b);
}

int multiplication() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a * b);
}

int division() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    if (b != 0) {
        printf("Result: %.2lf\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int logarithm() {
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if (a > 0) {
        printf("Logarithm: %.2lf\n", log(a));
    } else {
        printf("Error: Logarithm of non-positive numbers is not defined.\n");
    }
}

 int square_root() {
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if (a >= 0) {
        printf("Square Root: %.2lf\n", sqrt(a));
    } else {
        printf("Error: Square root of negative numbers is not defined.\n");
    }
}

int main() {
    int choice;

    do {
        printf("\nSimple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Logarithmic Value\n");
        printf("6. Square Root\n");
        printf("7. Exit\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addition(); break;
            case 2: subtraction(); break;
            case 3: multiplication(); break;
            case 4: division(); break;
            case 5: logarithm(); break;
            case 6: square_root(); break;
            case 7: printf("Exiting the calculator.\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}
