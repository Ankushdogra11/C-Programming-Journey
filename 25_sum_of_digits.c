/*
    Program: Sum of Digits
    Description: Takes a number as input and calculates the sum of all its digits using a while loop.
    Concepts: While Loop, Modulus Operator, Integer Division, Accumulator Variable
*/

#include <stdio.h>

int main(){
int n , digit, Sum = 0;

printf("Enter n :\n");
scanf("%d",&n);

while(n !=0)
{
	digit = n % 10;
	Sum = Sum + digit;
	n = n / 10;
	}
	printf("Sum is : %d" , Sum);
	
return 0;
}


    
