/*
Prog 14.Write a program to check provided character is vowel or constant using switch case.

*/
#include <stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    ch=toupper(ch);
    if(ch>='A' && ch<='Z')
    {
        switch(ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            printf("%c is a vowel.\n",ch);
            break;
            default:
             printf("%c is a consonant.\n",ch);            
        }
    }
    else
    {
        printf("%c is not an alphabet.\n",ch);
    }
 
getch();
}