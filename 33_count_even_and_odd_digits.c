/*
    Program: Count Even and Odd Digits
    Description: Takes a number as input and counts the even and odd digits using a while loop.
    Concepts: While Loop, Modulus Operator, Integer Division, Counter Variables, If-Else
*/

#include <stdio.h>

int main(){
int evenCount =0 , oddCount = 0;
int n, digit;

printf("Enter Number : \n");
scanf("%d", &n);

if( n == 0)
{
	evenCount = 1;
}
else{
	
while( n != 0)
{
	digit = n % 10;
  
if( digit % 2 == 0)
{
	evenCount++;
	}
else{
	oddCount++;	
}
      n = n / 10;
      } 
 }
printf(" Even digits = %d\n", evenCount);
printf( "Odd digits = %d", oddCount);


 	 return 0;
}
	 
   
