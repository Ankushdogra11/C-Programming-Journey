/*
    Program: Armstrong Number Using Function
    Description: Takes an integer as input and checks whether it is
                 an Armstrong number by calculating the sum of the
                 cubes of its digits using a user-defined function.
    Concepts: Functions, Function Prototype, Function Call,
              While Loop, Modulus Operator, Integer Division,
              Conditional Statements, Return Value
*/

#include <stdio.h>

int findArm(int n);

int main()
{
	int n , result ;
	int original;
	
	printf("Enter Number : \n");
	scanf("%d",&n);
       original = n;
	
	result = findArm(n);
	if( result == original)
	{
		printf("%d is an Armstrong Number\n",n);
		}
	else{
		printf("%d is not an Armstrong Number\n",n);
		}
	
	return 0;
}
	 
 int findArm( int n)
{
	int sum = 0;
	int digit;
	
	while(n != 0){
	digit = n % 10;
	sum = sum + digit * digit * digit;
	n = n / 10;
	}
	return sum;
}

   
