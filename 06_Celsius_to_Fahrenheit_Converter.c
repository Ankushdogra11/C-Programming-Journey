/*
    Program: Celsius to Fahrenheit Conversion
    Description: Takes temperature in Celsius as input from the user and converts it into Fahrenheit.
    Concepts: Variables, User Input, Arithmetic Operators, Floating-Point Calculation
*/

#include <stdio.h>


int main()
{
float Celsius, Fahrenheit;

printf("Enter Celsius:\n");
scanf("%f",&Celsius);

Fahrenheit = (Celsius * 9.0/5.0) + 32;

printf("Fahrenheit = %.2f\n", Fahrenheit);

return 0;
}

