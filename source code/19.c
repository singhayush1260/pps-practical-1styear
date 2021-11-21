#include <stdio.h>
#include <conio.h>
int checkPrime(int);
int checkPrime(int n)
{   int c=0;// counter variable to check divisibility
	for (int i=2;i<n;++i)
	{
		if(n%i==0)
			c++;
	}
	if(c!=0)
		return 0;
	else
		return 1;
}
void main()
{
	for (int i=1;i<300;++i)
	{
	   int check=checkPrime(i);
	   if(check==1)
	   	printf("%d\n",i);
	}
	getch();
}