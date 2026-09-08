/*
    Program: Vowel Checker Using Switch
    Description: Takes an alphabet as input and checks whether it is
                 a vowel or consonant using a switch statement.
                 Handles invalid non-alphabetic input.
    Concepts: Switch Statement, Character Input, Conditional Statements,
              ASCII Character Comparison, Break Statement
*/

#include <stdio.h>

int main(){
char ch;

    printf(" Enter Alphabet :\n");
    scanf("%c",&ch);
    
    switch(ch)
    {
    	case 'a' : 
    	case 'A' :
                           printf("Vowel");
                           break;
           case 'e' : 
           case 'E' : 
                           printf("Vowel");
                           break;
           case 'i' :
           case 'I' :
                          printf("Vowel");
                          break;
           case 'o' : 
           case 'O' :
                          printf("Vowel");
                          break;
           case 'u' : 
           case 'U' :
                         printf("Vowel");
                         break;
                         
            default : if( ( ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf(" Consonant ");
               }
                else{
                	printf("Invalid Input");
                }
         }
 	 return 0;
}
	 
 
