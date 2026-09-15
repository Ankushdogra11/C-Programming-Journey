/*
    Program: GST Calculator Using Functions
    Description: Takes the price of a product as input and calculates
                 the GST amount and final price including 18% GST
                 using user-defined functions.
    Concepts: Functions, Function Prototype, Function Call,
              Parameters, Return Value, Floating-Point Operations,
              Arithmetic Operators
*/

#include <stdio.h>

float calculateGst(int n);
float finalGst(int n , float gst_amount);

int main()
{
	int n;
	float result;
	printf("Enter Price : \n");
	scanf("%d", &n);
	
	result = calculateGst(n);
	printf("GST Amount = %.2f\n", result);
	
	result = finalGst(n , result);
	printf("Final price = %.2f\n", result);
	
	return 0;
}
float calculateGst(int n)
{
	float gst_amount;
	gst_amount = (n * 18.0) / 100;
	
	return gst_amount;
}
 
 float finalGst(int n , float result )
 {
 	return n + result;
 }
