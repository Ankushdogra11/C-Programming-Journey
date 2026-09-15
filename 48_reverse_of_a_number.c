/*
    Program: Number Reversal Using Function
    Description: Takes an integer as input and reverses the number
                 using a user-defined function.
    Concepts: Functions, Function Prototype, Function Call,
              While Loop, Modulus Operator, Integer Division,
              Return Value
*/

#include <stdio.h>

int reverseNum(int n);

int main()
{
	int n , result;
	printf("Enter Number : \n");
	scanf("%d" , &n);
	
	result = reverseNum(n);
	printf("Reversed Number = %d", result);
	
	 return 0;
}
	 
   int reverseNum(int n)
{
	int digit , reverse = 0;
	
    while( n != 0){
       digit = n %10;
       
       reverse = reverse * 10 + digit;
           n = n/10;
           }
           return reverse;
}

