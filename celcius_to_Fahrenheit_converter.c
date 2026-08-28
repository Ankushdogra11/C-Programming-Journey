/*
    Program: Celsius to Fahrenheit Converter 
    Description: Takes temperature in Celsius as input from the user and converts it into Fahrenheit.
    Concepts: Variables, User Input, Arithmetic Operators, Floating-Point Calculation.
*/


#include <stdio.h>

float Celsius, Fahrenheit;

int main(){
 printf("Enter Celsius:\n");
 scanf("%f",&Celsius);
 
 Fahrenheit = (Celsius * 9.0/5.0) + 32;
 
 printf("Fahrenheit = %.2f\n", Fahrenheit);
 
 return 0;
}
