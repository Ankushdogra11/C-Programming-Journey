/*
    Program: GCF of Two Numbers
    Description: Takes two numbers as input and finds their greatest common factor using a for loop.
    Concepts: For Loop, Modulus Operator, Ternary Operator, Comparison, Break Statement
*/

#include <stdio.h>

int main(){
int x,y,i;

printf("Enter Two Numbers : \n");
scanf("%d%d",&x, &y);

if ( x == 0 && y == 0)
{
	printf( "GCF is undefined for these values");
	}
else{
for( i = x < y ? x:y; i > 0; i--)
{
	if( x % i == 0 && y % i == 0)
	{
		printf("GCF is : %d", i);
		break;
		}
	}
}

 	 return 0;
}


