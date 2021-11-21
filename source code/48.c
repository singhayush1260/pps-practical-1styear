/*

Prog 48.Write a program to read number from file and then
 write all ‘odd’ number to file ODD.txt & all even to file EVEN.txt. 

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    FILE *file_reader;
    FILE *file_writter_even;
    FILE *file_writter_odd;
    int num;
    file_reader = fopen("num.txt", "r");
    file_writter_even = fopen("even.txt", "w");
    file_writter_odd = fopen("odd.txt", "w");
    while (fscanf(file_reader, "%d", &num) != -1)
    {

        if (num % 2 == 0)
            fprintf(file_writter_even, "%d\n", num);
        else
            fprintf(file_writter_odd, "%d\n", num);
    }
    printf("%s", "File Operations Completed");
    fclose(file_reader);
    fclose(file_writter_even);
    fclose(file_writter_odd);
    getch();
}