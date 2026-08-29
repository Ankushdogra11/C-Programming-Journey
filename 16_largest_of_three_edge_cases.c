/*
    Program: Largest of Three Numbers
    Description: Takes three numbers as input and determines the largest number while handling cases where two or all three numbers are equal.
    Concepts: Variables, User Input, Comparison Operators, Logical Operators, If-Else If-Else
*/

#include <stdio.h>

int main(){
int a,b,c;

printf("Enter a:\n");
scanf("%d",&a);
printf("Enter b:\n");
scanf("%d",&b);
printf("Enter c:\n");
scanf("%d",&c);

if(a ==b && b == c){
	printf("All three are equal");
	}
else if( (a == b) && (a >c)){
	printf("a and b are equal and largest");
	}
else if((a == c) && (a > b)){
	printf("a and c are equal and largest");
	}
else if(( b == c) && (b >a)){
	printf("b and c are equal and largest");
	}
else if(a>b && a>c){
printf("a is the largest number");
}
else if(b>a && b>c){
printf("b is the largest number");
}
else{
printf("c is the largest number");
}

return 0;
}
