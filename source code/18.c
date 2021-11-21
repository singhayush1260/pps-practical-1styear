#include <stdio.h>
#include <conio.h>
int factorial(int);
void main()
{
	double n,x,sum=0.0;
	printf("Enter the value of n\n");
	scanf("%lf",&n);
	printf("Enter the value of x\n");
	scanf("%lf",&x);
	for (int i=1;i<=n;++i)
	{
		if(i==1)
			sum=1;
		else
		{
		int fac=factorial((i-1));
		double nextTerm=(x*(i-1))/fac;
		if(i%2==0)
		sum=sum-nextTerm;
	    else
	    sum=sum+nextTerm;	
	}
	
}
printf("Sum of series= %lf\n",sum);  
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
