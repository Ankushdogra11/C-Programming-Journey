/*
    Program: Largest Digit in a Number
    Description: Takes a number as input and finds the largest digit using a while loop.
    Concepts: While Loop, Modulus Operator, Integer Division, If Statement, Comparison
*/

#include <stdio.h>

int main(){
int digit,largest = 0;
int n;

printf("Enter Number : \n");
scanf("%d", &n);


while( n != 0)
{
	digit = n % 10;
if ( digit > largest)
{
	largest = digit;
}
	n = n / 10;
}
	printf("Largest digit : %d" , largest);
	
 	 return 0;
}
