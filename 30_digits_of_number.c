/*
    Program: Count Digits in a Number
    Description: Takes a number as input and counts the number of digits using a while loop.
    Concepts: While Loop, Modulus Operator, Integer Division, Special Case Handling
*/

#include <stdio.h>

int main(){
int n , count = 0;

printf("Enter Number : \n");
scanf("%d", &n);

if(n == 0)
{
    count = 1;
}
else
{
    while( n != 0)
    {
        n = n / 10;
        count++;
    }
}

printf("Number of Digits : %d", count);

return 0;
}
