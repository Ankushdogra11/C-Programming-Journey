/*
    Program: Age Category
    Description: Takes age as input from the user and categorizes it as Child, Teenager, or Adult while handling invalid ages.
    Concepts: Variables, User Input, Comparison Operators, If-Else If-Else
*/

#include <stdio.h>

int main(){
int age;

printf("Enter age:\n");
scanf("%d",&age);

if(age < 0){
	printf("Invalid age");
}
else if(age < 13){
	printf("Child");
}
else if(age < 18){
	printf("Teenager");
}
else {
	printf("Adult");
}
return 0;
}


    
