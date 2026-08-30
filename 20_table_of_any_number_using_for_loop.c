/*
    Program: Multiplication Table
    Description: Takes a number as input and prints its multiplication table from 1 to 10 using a for loop.
    Concepts: For Loop, Variables, User Input, Arithmetic Operators
*/

#include <stdio.h>

int main(){
int n,i;

printf("Enter n :\n");
scanf("%d", &n);
printf("Table of %d is\n", n);

for ( i = 1 ; i <= 10 ; i++){
	
	printf("%d * %d = %d \n", n,i,n*i);
	}
  
return 0;
}


