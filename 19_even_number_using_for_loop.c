/*
    Program: Even Numbers Using For Loop
    Description: Takes a number n as input and prints even numbers from 1 to n using a for loop with an increment of 2.
    Concepts: For Loop, Variables, User Input, Increment Operator
*/#include <stdio.h>

int main(){
int n,i;

printf("Enter n :\n");
scanf("%d", &n);

for ( i = 2 ; i <= n ; i+=2){
	
	printf("%d\n", i);
	}
return 0;
}


    
