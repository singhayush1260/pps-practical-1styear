#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
	double a, b, c, s, area;
	printf("Enter the length of first side\n");
	scanf("%lf", &a);
	printf("Enter the length of second side\n");
	scanf("%lf", &b);
	printf("Enter the length of third side\n");
	scanf("%lf", &c);
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("Area= %lf \n", area);
	getch();
}
