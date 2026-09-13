/*
    Program: GCD and LCM Using Functions
    Description: Takes two integers as input and calculates their
                 Greatest Common Divisor (GCD) and Least Common
                 Multiple (LCM) using user-defined functions.
                 Handles positive, negative, and zero values.
    Concepts: Functions, Function Prototypes, Function Calls,
              For Loop, Modulus Operator, Ternary Operator,
              Return Values, Conditional Statements, Input Validation
*/

#include <stdio.h>

int calculateGCD(int x , int y);
int calculateLCM(int x , int y);


int main()
{
	int x, y;
	int result;
	printf("Enter x and y : \n");
	scanf("%d%d" , &x , &y);
	
	if( x == 0 && y == 0)
{
	printf("LCM and GDC are not undefined\n");
	        return 0;
	}
	if( x < 0){
		x = -x;
	}
	if(y < 0){
		y = -y;
		}
	
	result = calculateGCD(x ,y);
	printf("GCD = %d\n", result );
	
	if( x == 0 || y == 0)
	{
		printf("LCM = 0\n");
		}
		else {
			result = calculateLCM(x ,y);
	             printf("LCM = %d\n", result );
	       }
	
	 return 0;
}
	 
int calculateGCD(int x , int y)
{
	int  i;
	if( x == 0)
	{
		return y;
		}
	if( y == 0)
	{
		return x;
		}
	
	for( i = ( x < y? x : y); i > 0; i--)
	{
		if( x % i == 0 && y % i == 0){
			return i;
			}
		}
	}
int calculateLCM( int x , int y)
{
	int i;
	for( i = ( x > y? x : y);  ; i++)
	{
		if( i % x == 0 && i % y == 0){
			return i;
			}
		}
	}
		
       
