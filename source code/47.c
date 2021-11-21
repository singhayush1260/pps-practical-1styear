#include <stdio.h>
void main()
{
	FILE *read_pointer;
	FILE *write_pointer;
	read_pointer=fopen("10 integers.txt","r");
	write_pointer=fopen("squares.txt","w");
	 while (!feof (read_pointer))
	{   
		int i=0;
		fscanf (read_pointer, "%d", &i); 
		fprintf(write_pointer, "%d\n",i*i );
		printf("%d\n",i );
		printf("%d\n",i*i);
	}
	fclose(write_pointer);
	fclose(read_pointer);
    getch();
}