/*
    Program: Menu-Driven Number Utility
    Description: Provides a menu to perform different number operations
                 such as checking Even/Odd, checking Prime, and finding
                 the Factorial of a number.
    Concepts: Functions, Function Prototypes, Function Calls,
              Switch Statement, Loops, Conditional Statements,
              Modulus Operator, Return Values
*/
#include <stdio.h>

int checkEvenOdd(int n);
int checkPrime(int n);
long long factorial(int n);

int main()
{
int result , n;
int choice;
long long fact;

       printf("Enter your Choice :\n");
       scanf("%d", &choice);
	printf("Enter n:\n");
	scanf("%d", &n);
	
switch(choice)
	{
	case 1 : result = checkEvenOdd(n);
	   if(result == 1){
	   	printf("%d is an Even Number\n", n);
	   	}
	   else if(result == 0){
	   	printf("%d is an Odd Number\n", n);
	   	}
	   	break;
	case 2 : result = checkPrime(n);
	    if(result == 1){
	    	printf("%d is a Prime Number \n", n);
	    	}
	   else {
	    printf("%d is not a Prime Number \n" ,n);
	    }
	     break;
	case 3 : fact= factorial(n);
	      printf("Factorial = %lld\n", fact);
	      break;
}
	 return 0;
}
	 
int checkEvenOdd(int n)
{
      if( n % 2 == 0){
        return 1;
        }
      else{
               return 0;
              }
}

int checkPrime(int n)
{
	int i;
	
	if(n <= 1){
		return 0;
		}
	for( i = 2 ; i < n ; i++){
		if( n % i == 0)
		return 0;
		}
		return 1;
}

long long factorial( int n)
{
	int long long fact = 1;
	int i;
	for( i = 1 ; i <= n ; i++)
	{
		fact = fact * i;
		}
		return fact;
}


