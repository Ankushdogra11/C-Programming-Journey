/*
    Program: Palindrome Number
    Description: Takes a number as input, reverses its digits and checks whether the reversed number is equal to the original number.
    Concepts: While Loop, Modulus Operator, Integer Division, Variables, Comparison Operator
*/

#include <stdio.h>

int main(){
int n, digit, reverse = 0;
int original;

printf("Enter Original number :\n");
scanf("%d",&n);
original = n;

while(n != 0)
{
	digit = n % 10;
	reverse = reverse*10 + digit;
	n = n / 10;
	}
	if ( original == reverse )
	{
		printf(" Number is Palindrome");
		}
	else
	{
		printf(" Number is not Palindrome");
		}
	
return 0;
}


 
