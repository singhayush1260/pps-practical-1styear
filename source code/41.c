/*
Prog 41. Write a program to remove all the blank space from the string & print it,
also count the no of characters. 
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    int size = 0;
    printf("Enter the size of string\n");
    scanf("%d", &size);
    char sentence[size];
    fflush(stdin);
    printf("Enter the sentence\n");
    fgets(sentence, size, stdin);
    printf("%s%s","Original Sentence: ", sentence);
    printf("\n%s","Sentence after removing all blank spaces: ");
    int countChar=0;
    for(int i=0;i<strlen(sentence);i++)
    {
        char a=sentence[i]; // extract each char of the string
        if(a!=' ')
        {
         printf("%c",a);
         countChar++;
        }
       
    }
    // subtracting 1 cause string ends with a \0
    printf("\n%s%d","Number of character is ",countChar-1);
    getch();
}