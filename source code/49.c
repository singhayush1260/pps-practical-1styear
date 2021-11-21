/*
 Prog 49.Write a program to print all the prime number, between 1 to 100 in file prime.txt. 
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int isPrime(int);
void main()
{

    FILE *file_writter;
    file_writter = fopen("prime.txt", "w");
    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i) == 1)
            fprintf(file_writter, "%d\n", i);
    }
    printf("%s", "File Writing Completed");
    fclose(file_writter);
    getch();
}
int isPrime(int n)
{
    int p = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            p++;
        }
    }
    if (p != 0)
        return 0;
    else
        return 1;
}