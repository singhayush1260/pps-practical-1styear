/*
 Prog 40. Write program to sort the array of character (String) 
 in alphabetical order like STRING in GINRST. 
*/
#include <stdio.h>
#include <conio.h>
#include<string.h>
#include <ctype.h> 
void main()
{
   
    char alpha[]={'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O',
    'P','Q','R','S','T','U','V','W','X','Y','Z'};
     int size;
    printf("Enter the size of string\n");
    scanf("%d", &size);
    char string[size];
    char sortedString[size];
    printf("Enter the string\n");
    scanf("%s", &string);  
    printf("%s%s","Original String: ",strupr(string)); 
    printf("\n%s","Sorted String: "); 
    for(int i=1;i<=26;i++)
    {
        char a=toupper(alpha[i]);
   
        for(int j=0;string[j]!='\0';j++)
        {
            char b=toupper(string[j]);
          
            if(a==b)
            {
                printf("%c",a);
            }
        }
    }
    getch();
}
