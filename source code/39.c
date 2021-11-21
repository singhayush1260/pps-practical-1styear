/*
Prog 39. Write a program in C to check whether the given string is a palindrome or not.
*/
#include <stdio.h>
#include <conio.h>
#include<string.h>
void main()
{
    int size;
    printf("Enter the size of string\n");
    scanf("%d", &size);
    char string[size];
    char reversedString[size];
    printf("Enter the string\n");
    scanf("%s", &string);
    strcpy(reversedString, string);
    strrev(reversedString);

    if (strcmp(string, reversedString) == 0)
    {
        printf("%s", "The string is a palindrome string.\n");
    }
    else
    {
        printf("%s", "The string is not a palindrome string.\n");
    }
    getch();
}