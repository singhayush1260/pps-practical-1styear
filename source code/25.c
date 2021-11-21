#include <stdio.h>
#include <math.h>
#include <conio.h>
double calculateArea(double, double, double);
void main()
{
    double a, b, c, s;
    printf("Enter the length of first side\n");
    scanf("%lf", &a);
    printf("Enter the length of second side\n");
    scanf("%lf", &b);
    printf("Enter the length of third side\n");
    scanf("%lf", &c);
    double area = calculateArea(a, b, c);
    printf("Area= %lf \n", area);
    getch();
}
double calculateArea(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}