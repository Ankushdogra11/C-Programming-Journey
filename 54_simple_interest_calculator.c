/*
    Program: Simple Interest Calculator Using Function
    Description: Takes principal, rate, and time as input and calculates
                 the simple interest using a user-defined function.
    Concepts: Functions, Function Prototype, Function Call,
              Parameters, Arithmetic Operators, Return Value
*/
#include <stdio.h>

float calculateInterest(int P, float R , float T);

int main()
{
	int P;
	float R, T;
	float result;
	
	printf("Enter Principal:\n");
	scanf("%d" , &P);
	printf("Enter Rate : \n");
	scanf("%f" , &R);
	printf("Enter Time : \n");
	scanf("%f", &T);
	
	result = calculateInterest(P, R, T);
	printf("%.2f", result);
	
	return 0;
}
	 
 float calculateInterest(int P , float R , float T)
{
	float SI;
	
	SI = ( P * R * T) / 100;
	
	return SI;
}
	
     
