/*
Prog 29. Write a program to find the factorial of given number using recursion.
*/

#include <stdio.h>
#include <conio.h>
int fact(int);
void main()
{
    int n = 0;
    printf("%s", "Enter the number:");
    scanf("%d", &n);
    printf("Factorial of %d is: %d", n, fact(n));
}

int fact(int n)
{
    if (n <= 1) // base case
        return 1;
    else
        return n * fact(n - 1);
}