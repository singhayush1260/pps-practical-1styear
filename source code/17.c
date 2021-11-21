#include <stdio.h>
#include <conio.h>
int factorial();
void main()
{  
	int n=0,sum=0;
    printf("%s\n","Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
          sum=sum+factorial(i);
    }
    printf("%s%d\n","The sum of series = ",sum);
    getch();
}
int factorial(int num)
{
	int fac=1;
	for(int i=1;i<=num;i++)
	{
		fac=fac*i;
	}
	return fac;
}