#include <ctype.h> 
#include<stdio.h>
#include<conio.h>
void main() 
{ 
	char c; 
	printf("%s","Enter the character:");
    scanf("%c",&c);
	c= toupper(c); 
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("%c%s",c," is a vowel.");
    }
    else
    {
           printf("%c%s",c," is a consonant.");
    }
    getch();
} 