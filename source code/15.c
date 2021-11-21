/*
Write a program to construct a Fibonacci series upto n terms
*/


#include <stdio.h>
#include <conio.h>
void main()
{
	int n, a = 0, b = 1, sum = 0;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	if (n == 1)
		printf("0");
	else if (n == 2)
		printf("0 1");
	else
	{
		printf("%d %s %d", a, " ", b);
		for (int i = 3; i <= n; i++)
		{
			sum = a + b;
			printf("%s %d %s", " ", sum, " ");
			a = b;
			b = sum;
		}
	}
	getch();
}