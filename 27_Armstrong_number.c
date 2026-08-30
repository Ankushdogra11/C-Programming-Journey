/*
    Program: Armstrong Number
    Description: Takes a number as input, calculates the sum of cubes of its digits, and compares it with the original number.
    Concepts: While Loop, Modulus Operator, Integer Division, Arithmetic Operators, Comparison Operator
*/

#include <stdio.h>

int main(){
int n, digit, sum = 0;
int original;

printf("Enter Original nunber :\n");
scanf("%d",&n);
original = n;

while(n != 0)
{
	digit = n % 10;
	sum = sum + digit * digit * digit;
	n = n / 10;
	}
	if ( original == sum)
	{
		printf(" Armstrong Number ");
		}
	else
	{
		printf(" not an Armstrong Number ");
		}
	
return 0;
}


    
