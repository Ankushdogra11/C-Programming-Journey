/*
    Program: Reverse a Number
    Description: Takes a number as input and reverses its digits using a while loop.
    Concepts: While Loop, Modulus Operator, Integer Division, Variables
*/

#include <stdio.h>

int main(){
int n , digit, reverse = 0;

printf("Enter n :\n");
scanf("%d",&n);

while(n !=0)
{
	digit = n % 10;
	reverse = reverse * 10 + digit;
	n = n / 10;
	}
	printf("Reverse : %d" , reverse);
	
return 0;
}


    
