/*
Prog 46. Write a c program to copy & count the character content of one file says
a.txt to another file b.txt.

*/

#include <stdio.h>
#include <conio.h>
void main()
{
	FILE * read_pointer;
	FILE * write_pointer;
	int countCharacters=0;
	char ch;
	read_pointer=fopen("a.txt","r");
	write_pointer=fopen("b.txt","w");
	while(1)
	{
		ch=fgetc(read_pointer);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			countCharacters++;
            fputc(ch,write_pointer);
		}
	}
	printf("%s %d","The number of characters in file: ",countCharacters);
	fclose(read_pointer);
	fclose(write_pointer);
    getch();
}

OUTPUT:

ON CONSOLE: 
The number of characters in file:  5

CONTENT OF FILE 'a.txt':
ayush

CONTENT OF FILE 'b.txt':
ayush