#include <stdio.h>
#include <conio.h>
long int factorial(long int);
void main()
{
	long int n;
	printf("Enter the number\n");
	scanf("%ld",&n);
	int fac=factorial(n);
	printf("Factorial= %ld\n",fac);
    getch();
}
long int factorial(long int n)
{
	long int f=1;
	for (int i=1;i<=n;++i)
	{
		f=f*i;
	}
	return f;
}
