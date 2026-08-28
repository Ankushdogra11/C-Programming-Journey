/*
    Program: Mini Calculator
    Description: Takes two numbers as input from the user and performs addition, subtraction, multiplication, and division.
    Concepts: Variables, User Input, Arithmetic Operators,Conditional Statements
*/

#include <stdio.h>

int main(void) {
    float a, b;

    printf("enter a: \n");
    scanf("%f", &a);

    printf("enter b: \n");
    scanf("%f", &b);

    printf("sum = %.2f\n", a + b);
    printf("sub = %.2f\n", a - b);
    printf("multiply = %.2f\n", a * b);

    if (b != 0) {
        printf("division=%.2f\n", a / b);
    } else {
        printf("division not found or infinity");
    }

    return 0;
}
