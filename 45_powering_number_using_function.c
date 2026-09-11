/*
    Program: Power of a Number Using Function
    Description: Takes a base and exponent as input and calculates
                 the power using a user-defined function.
                 Handles negative exponents as invalid input.
    Concepts: Functions, Function Prototype, Function Call,
              For Loop, Parameters, Return Value, Input Validation
*/

#include <stdio.h>

long long calculatePower(int n , int exponent);

int main()
{
	int n , exponent;
	long long result;
	
	printf("Enter n : \n");
	scanf("%d", &n);
	printf("Enter Exponent :\n");
	scanf("%d", & exponent);
	
	if(exponent< 0)
	{
		printf("Negative exponent is not supported\n");
		return 0;
	}
else{
	result = calculatePower( n , exponent);
	printf("Result = %lld", result);
}
	 return 0;
}
	 
long long calculatePower( int n , int exponent)
{
	long long result = 1;
	int i;
	
    for( i =1 ; i <= exponent ; i++)
   {
          result = result * n;
         }
      return result;
}

