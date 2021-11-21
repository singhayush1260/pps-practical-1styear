/*
 Prog 30. Write a program to find the sum of digits of a 
  5 digit number using recursion. 
*/

#include <stdio.h>
#include <conio.h>
int sumOfDigits(int);
void main()
{
    int n = 0;
    printf("%s", "Enter the number:");
    scanf("%d", &n);
    printf("Sum of digits of %d is: %d", n, sumOfDigits(n));
    getch();
}

int sumOfDigits(int n)
{
    if (n == 0) // base case
        return 0;
    else
    {

        return (n % 10 + sumOfDigits(n / 10));
    }
}