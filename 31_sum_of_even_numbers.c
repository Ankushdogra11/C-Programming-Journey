/*
    Program: Sum of Even Numbers in a Range
    Description: Takes a starting and ending number as input and calculates the sum of all even numbers within the given range.
    Concepts: For Loop, If-Else, Modulus Operator, Accumulator Variable
*/

#include <stdio.h>

int main(){
int start , end;
int i , n ;
int sum = 0;
 
 printf(" Enter Starting Number:\n");
 scanf("%d", &start);
 
 printf("Enter Ending Number : \n");
 scanf("%d", &end);
 
 for( i = start ; i <= end ; i++)
 {
 	if( i % 2 == 0){
 	sum = sum + i;
 	}
 }
 printf("Sum of Even numbers :%d", sum);
 	 return 0;
}


