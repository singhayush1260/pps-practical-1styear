#include <stdio.h>
#include <conio.h>
int factorial(int);
void main()
{
	int n;
	int sum=0;//to store sum of series
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for (int i=1;i<=n;++i)
	{
		int fac=factorial(i);
		sum=sum+fac;
	}
	printf("Sum of series= %d\n",sum);
    getch();
}
int factorial(int n)
{
	int f=1;
	for (int i=1;i<=n;++i)
	{
		f=f*i;
	}
	return f;
}
