/*
    Program: Sum of Digits Using Function
    Description: Takes an integer as input and calculates the sum
                 of all its digits using a user-defined function.
    Concepts: Functions, Function Prototype, Function Call,
              While Loop, Modulus Operator, Integer Division,
              Return Value
*/

#include <stdio.h>

int numSum(int n);

int main()
{
	int n , result;
	printf("Enter Number : \n");
	scanf("%d",&n);
	
	result = numSum(n);
	printf("Sum = %d", result);
	 return 0;
}
	 
 int numSum(int n)
 {
 	int digit , sum = 0;
 	
 	while(n != 0)
 	{
 	digit = n % 10;  
       sum = sum + digit ;
       n = n/10;
       }
       return sum;
 }

