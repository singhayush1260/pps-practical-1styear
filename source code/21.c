/*
Prog 21. Write a program to draw the following figure: 
3 2 1 
2 1
1
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    for (int i = 3; i >= 1; i--)
    {
        for (int j = i; j >= 1; --j)
        {
            printf("%d%s", j, " ");
        }
        printf("\n");
    }
    getch();
}