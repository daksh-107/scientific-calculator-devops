#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\n--- Scientific Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square Root\n");
        printf("6. Power\n");
        printf("7. Sine\n");
        printf("8. Cosine\n");
        printf("9. Log\n");
        printf("10. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result = %.2lf\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result = %.2lf\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result = %.2lf\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0)
                    printf("Result = %.2lf\n", num1 / num2);
                else
                    printf("Error: Division by zero\n");
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                printf("Result = %.2lf\n", sqrt(num1));
                break;

            case 6:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result = %.2lf\n", pow(num1, num2));
                break;

            case 7:
                printf("Enter angle in radians: ");
                scanf("%lf", &num1);
                printf("Result = %.2lf\n", sin(num1));
                break;

            case 8:
                printf("Enter angle in radians: ");
                scanf("%lf", &num1);
                printf("Result = %.2lf\n", cos(num1));
                break;

            case 9:
                printf("Enter number: ");
                scanf("%lf", &num1);
                printf("Result = %.2lf\n", log(num1));
                break;

            case 10:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
