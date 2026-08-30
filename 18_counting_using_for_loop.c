/*
    Program: Counting Using For Loop
    Description: Takes a number as input and prints all numbers from 1 to n using a for loop.
    Concepts: Variables, User Input, For Loop, Initialization, Condition, Increment
*/

#include <stdio.h>

int main(){
int n,i;

printf("Enter n :\n");
scanf("%d", &n);

for ( i = 1 ; i <= n ; i++){
	printf("%d\n", i);
	}
return 0;
}
