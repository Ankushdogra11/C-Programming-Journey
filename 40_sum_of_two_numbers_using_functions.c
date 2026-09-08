/*
    Program: Sum of Two Numbers Using Function
    Description: Takes two numbers as input and calculates their sum
                 using a user-defined function.
    Concepts: Function Prototype, Function Call, Function Definition,
              Parameters, Return Value
*/

#include <stdio.h>
int numSum(int a , int b);

int main(){
	
	int a , b , result;
	
	printf(" Enter a and b : \n");
	scanf("%d %d" ,&a,&b);
	
	
	result = numSum( a, b);
	
	printf( "Sum = %d\n" , result);

 	 return 0;
}
	 
    int numSum( int a , int b)
    {
    	return a + b;
    }
   
