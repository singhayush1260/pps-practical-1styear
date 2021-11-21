#include <stdio.h>
#include <conio.h>
void main()
{
	int n, sum = 0;
	printf("Enter the number\n");
	scanf("%d", &n);
	while (n > 0)
	{
		int r = n % 10;
		if (r % 2 != 0)
			sum = sum + r;
		n = n / 10;
	}
	printf("Sum= %d\n", sum);
	getch();
}