#include <stdio.h>
#include <conio.h>
void main()
{
	int n,s=0,temp;
	printf("Enter the number: \n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
      int r=n%10;
      s=s+r*r*r;
      n=n/10;
	}
	if(s==temp)
		{
		printf("%d",temp);
        printf(" is a Armstrong Number.");
	    }
	else
		{
		printf("%d",temp);
        printf(" is not a Armstrong Number.");
	    }
	
	getch();
}