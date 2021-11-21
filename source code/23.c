#include <stdio.h>
#include <conio.h>
void main()
{
	int n;
	int ar[5];
	printf("Enter the number\n");
	scanf("%d",&n);
	for(int i=0;i<5;i++)
	{
		ar[i]=n%10;
		n=n/10;
	}
	
	for(int i=4;i>=0;i--)
	{
		if(ar[i]!=0)
		printf("%d\n",ar[i]);
	}
	getch();
}