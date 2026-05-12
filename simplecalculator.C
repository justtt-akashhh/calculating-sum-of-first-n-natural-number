#include<stdio.h>
void simple_calculator();
int main(){
    char choice;
    do {
        simple_calculator();
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Thank you for using the simple calculator. Goodbye!\n");
    return 0;
}
void simple_calculator() {
float a, b;
printf("Enter the first number:");
scanf("%f", &a);
printf("Enter the operation you want to perform (+, -, *, /): ");
char op;
scanf(" %c", &op);
if (op == '+' || op == '-' || op == '*' || op == '/') {
    printf("Enter the second number:");
    scanf("%f", &b);
    if (op == '+') {
        printf("Result: %f\n", a + b);
    } else if (op == '-') {
        printf("Result: %f\n", a - b);
    } else if (op == '*') {
        printf("Result: %f\n", a * b);
    } else if (op == '/') {
        if (b != 0) {
            printf("Result: %f\n", a / b);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
} else {
    printf("Error: Invalid operation.\n");
}
}
