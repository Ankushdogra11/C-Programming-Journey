/*
    Program: Sum of N Natural Numbers
    Description: Takes a number n as input and calculates the sum of natural numbers from 1 to n using a for loop.
    Concepts: For Loop, Variables, User Input, Accumulator Variable, Arithmetic Operators
*/
#include <stdio.h>

int main(){
int n,i;
int Sum = 0;

printf("Enter n :\n");
scanf("%d", &n);

for ( i = 1 ; i <= n ; i++){
	Sum = Sum + i;
	}
	printf("Sum is : %d", Sum);
return 0;
}


    
