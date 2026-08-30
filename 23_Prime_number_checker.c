/*
    Program: Prime Number Checker
    Description: Takes a number as input and checks whether it is prime by testing its divisibility up to the square root of the number.
    Concepts: For Loop, Modulus Operator, Logical Conditions, Flag Variable, Break Statement
*/

#include <stdio.h>

int main(){
int n,i;
int isPrime = 1;



printf("Enter n :\n");
scanf("%d", &n);

if(n < 2){
	isPrime = 0;
	}
else
{
	for(i = 2; i*i <= n; i++)
	{
		if(n % i == 0)
		{
			isPrime = 0;
			break;
			}
             }
      }
   if( isPrime == 1 )
   {
   	printf("Prime Number");
   	}
   else
   {
   	printf("Not Prime Number");
   }
return 0;
}


    
