#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("6. learn goto\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero.\n");
                }
                break;

            case 5:
                printf("Exiting the program.\n");
                exit(0);  // here exit is used

            case 6:
                goto lol;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    lol:printf("this was joke xd\n");

    return 0;
}
