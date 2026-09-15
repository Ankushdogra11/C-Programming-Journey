/*
    Program: Count Digits Using Function
    Description: Takes an integer as input and counts the total number
                 of digits using a user-defined function.
    Concepts: Functions, Function Prototype, Function Call,
              Parameters, While Loop, Integer Division,
              Return Value
*/

#include <stdio.h>

int digitNum(int n);

int main()
{
	int n , result;
	
	printf("Enter Number : \n");
	scanf("%d",&n);
	
	 result = digitNum(n);
	 printf("Number of Digits = %d", result );
	
	return 0;
}
	 
 int digitNum( int n)
{
   int count = 0;
    
      while(n != 0){
          n = n / 10;
           count++;
        }
        return count;
}
