#include<stdio.h>
int main(){
int a, b;
printf("Enter the first number:");
scanf("%d", &a);
printf("Enter the operation you want to perform (+, -, *, /): ");
char op;
scanf(" %c", &op);
if (op == '+' || op == '-' || op == '*' || op == '/') {
    printf("Enter the second number:");
    scanf("%d", &b);
    if (op == '+') {
        printf("Result: %d\n", a + b);
    } else if (op == '-') {
        printf("Result: %d\n", a - b);
    } else if (op == '*') {
        printf("Result: %d\n", a * b);
    } else if (op == '/') {
        if (b != 0) {
            printf("Result: %d\n", a / b);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
} else {
    printf("Error: Invalid operation.\n");
}
}