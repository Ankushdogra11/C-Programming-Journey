/*
    Program: Prime Numbers in a Range
    Description: Takes a starting and ending number as input and prints all prime numbers within the given range.
    Concepts: For Loop, Nested Loop, Modulus Operator, Flag Variable, Break Statement
*/

#include <stdio.h>

int main(){
int i,j, isPrime;
int start, end;

 printf("Starting Number : \n");
scanf("%d", &start);

printf("Ending Number : \n");
scanf("%d", &end);

    for( i = start ; i <= end ; i++)
{
    isPrime = 1;
 
      if( i < 2 )
  {
     isPrime = 0;
}
else{
	 for( j = 2 ; j*j <= i ; j++)
	 {
	 	if ( i % j == 0)
	 	{
	 		isPrime = 0;
	 		break;
	 		}
	 	}
	 }
	 
	 if( isPrime == 1)
	 {
	 	printf("%d\n", i );
	 	}
	 }
	 return 0;
}

