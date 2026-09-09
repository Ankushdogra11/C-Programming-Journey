/*
    Program: Prime Number Checker Using Function
    Description: Takes a number as input and checks whether it is
                 a prime number using a user-defined function.
    Concepts: Function Prototype, Function Call, Function Definition,
              Parameters, Return Value, For Loop, Modulus Operator
*/

#include <stdio.h>
int chkPrime(int n);

int main(){
	
	int n , result;
	
	
	printf(" Enter a : \n");
	scanf("%d" ,&n);
	
	
	result = chkPrime( n );
	
	if( result == 1)
	{
		printf("Prime");
		}
	else{
		printf("Not Prime");
	}
		
 	 return 0;
}
	 
    int chkPrime (int n)
    {
       int i;
     if(n <= 1)
       	return 0;
       	for( i = 2 ; i <= n; i++)
       	{
       		if( n % i == 0)
       		{
       			return 0;
       		}
       	}
      return 1;
     }
     
       


