/*
    Program: Multiplication Table Using Functions
    Description: Takes a number as input and displays its multiplication
                 table from 1 to 10 and in reverse order using
                 user-defined functions.
    Concepts: Functions, Function Prototypes, Function Calls,
              Parameters, For Loop, Reverse Loop, Arithmetic Operators
*/

#include <stdio.h>

void table(int n);
void tableReverse(int n);
int main()
{
	int n;
	
	printf("Enter Number : \n");
	scanf("%d",&n);
	
	 table(n);
	 tableReverse(n);
	
	return 0;
}
	 
 void table(int n)
 {
 	int i;
 	 printf("Table of the number %d is\n" , n);
 	
 	for(i = 1 ; i <= 10 ; i++)
 	{
 	       printf("%d * %d = %d\n", n, i, n *i);
 	     }
}

void tableReverse(int n)
{
    int i;
  printf("Reverse of the table of %d  is\n" , n);

for( i = 10 ; i >= 1; i--)
{
     printf("%d * %d = %d\n", n, i, n*i);
     }
}
