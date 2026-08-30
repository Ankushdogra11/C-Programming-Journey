/*
    Program: Fibonacci Series
    Description: Takes the number of terms as input and prints the Fibonacci series using a for loop, where each term is the sum of the previous two terms.
    Concepts: For Loop, Variables, User Input, Arithmetic Operators, Variable Updating
*/

#include <stdio.h>

int main(){
int n,a = 0 , b = 1;
int i, next;

printf("Enter number of terms : \n");
scanf("%d",&n);

for(i =1; i <= n ; i++)
{
	printf("%d\n", a);
	
	next = a + b;
	 a = b;
	 b = next;
}

return 0;
}


    
