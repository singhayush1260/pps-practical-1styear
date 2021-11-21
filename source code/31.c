/*
Prog 31. Write a program to calculate the GCD of given numbers using recursion.
*/
#include <stdio.h>
#include <conio.h>
int gcd(int, int);
void main()
{
    int a = 0, b = 0;
    printf("%s", "Enter the first number:");
    scanf("%d", &a);
    printf("%s", "Enter the second number:");
    scanf("%d", &b);
    printf("GCD of %d and %d is: %d", a, b, gcd(a, b));
    getch();
}
int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}
