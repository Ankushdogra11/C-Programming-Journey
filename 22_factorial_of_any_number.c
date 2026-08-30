/*
    Program: Factorial of a Number
    Description: Takes a number as input, checks for negative values and calculates its factorial using a for loop.
    Concepts: For Loop, Variables, User Input, If-Else, Accumulator Variable, Multiplication Operator
*/

#include <stdio.h>

int main(){
int n,i;
long long fact = 1;


printf("Enter n :\n");
scanf("%d", &n);

if(n<0){
	printf("Factorial is not defined for a negative number");
}
else
       {for ( i = 1 ; i <= n ; i++)
       {
	fact = fact*i;
	}
	printf("Factorial of the number is : %lld", fact);
	}
return 0;
}


    
