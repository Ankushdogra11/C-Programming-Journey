/*
    Program: Celsius to Fahrenheit Converter Using Function
    Description: Takes temperature in Celsius as input and converts it
                 into Fahrenheit using a user-defined function.
    Concepts: Functions, Function Prototype, Function Call,
              Parameters, Floating-Point Operations, Arithmetic Operators,
              Return Value
*/

#include <stdio.h>

float celsiusTofahrenheit(float c);

int main()
{
	float c;
	float result;
	printf("Enter Temp in Celsius : \n");
	scanf("%f", &c);
	
	result = celsiusTofahrenheit(c);
	printf("%.2f" , result);
	
	
	return 0;
}
	 
 float celsiusTofahrenheit(float c)
{
	float F;
	
	F = ( c * 9.0/5.0) + 32;
	
	return F;
}
	
     
