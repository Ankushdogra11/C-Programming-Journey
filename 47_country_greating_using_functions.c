/*
    Program: Country Greeting Using Functions
    Description: Takes a country code as input and displays a
                 greeting using the corresponding user-defined function.
                 Handles invalid country codes.
    Concepts: Functions, Function Prototypes, Function Calls,
              Conditional Statements, Character Input, If-Else
*/

#include <stdio.h>

void Indian();
void French();
void English();
void German();

int main()
{
	char country;
  
  printf("Enter Country :\n");
  scanf("%c", &country);
  
  if(country == 'I')
  {
  	Indian();
  	}
  else if(country == 'F')
  {
  	French();
  	}
  else if(country == 'G')
  {
  	German();
  	}
  else if(country == 'E')
  {
  	English();
  	}
  else {
  	printf("Invalid Country");
  	}
	
	 return 0;
}
	 
void Indian()
{
    printf("Namaste!! \n Kaisee h Aap?");
}
void French()
{
    printf("Bonjour!! \n comment allezvous");
}
void English()
{
    printf("Hello!!\n How are you??");
}
void German()
{
    printf("Haloo!!\n wie geht es lhnen");
}
