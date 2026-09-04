/*
    Program: Count Digits of a Number
    Description: Takes a number as input and counts the number of digits using a while loop.
    Concepts: While Loop, Integer Division, Counter Variable, User Input
*/

#include <stdio.h>

int main(){
int n , count = 0;

 printf("EnterNumber : \n");
scanf("%d", &n);

while( n != 0)
{
	n = n / 10;
	count++;
	}
printf(" Number of Digits : %d", count);
       
       return 0;
}


