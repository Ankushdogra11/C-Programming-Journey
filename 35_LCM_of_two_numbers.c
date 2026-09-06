/*
    Program: LCM of Two Numbers
    Description: Takes two numbers as input and finds their least common multiple using a loop.
    Concepts: While Loop, Modulus Operator, Ternary Operator, Infinite Loop, Break Statement
*/

#include <stdio.h>

int main(){
int x,y,i;

printf("Enter Two Numbers : \n");
scanf("%d%d",&x, &y);

if ( x == 0 && y == 0)
{
	printf( "LCM is undefined for these values");
	}
else if( x == 0 || y == 0)
{
	printf("LCM is : 0");
}	
else{
	if(x <0)
	x = - x;
	if(y <0)
	y = -y;
	
	for( i = x > y ? x:y; ; i++)
{
	if( i % x == 0 && i % y == 0)
	{
		printf("LCM is : %d", i);
		break;
		}
	}
}
    
   

 	 return 0;
}
	 
    
