/*
    Program: Vowel or Consonant Checker
    Description: Takes a character as input from the user and checks whether it is a vowel, consonant, or invalid input.
    Concepts: Character Variables, User Input, Character Comparison, Logical Operators, If-Else If-Else
*/

#include <stdio.h>

int main(){
char ch;
printf("Enter ch:\n");
scanf("%c",&ch);

if((ch == 'a' || ch == 'A') || (ch == 'e' || ch == 'E') || (ch == 'i' || ch == 'I') || (ch == 'o' || ch == 'O') || (ch == 'u' || ch == 'U')){
	printf("Vowel");
}
else if (( ch >= 'a' && ch <= 'z') || ( ch >= 'A' && ch <= 'Z')){ 
	printf("Consonant");
}
else{
	printf("Invalid input");
}
return 0;
}


    
