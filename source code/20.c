#include <stdio.h>
#include <conio.h>
int checkArmstrong(int);
int checkArmstrong(int n)
{
	int s=0,temp=n;
	while(n>0)
	{
      int r=n%10;
      s=s+r*r*r;
      n=n/10;
	}
	if(s==temp)
		return 1;
	else
		return 0;
}
void main()
{
	for (int i=100; i<500;++i)
	{
	   int check=checkArmstrong(i);
	   if(check==1)
	   	printf("%d\n",i);
	}
	getch();
}