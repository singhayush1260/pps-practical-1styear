#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("Enter the value of coefficient of x^2: \n");
    scanf("%d", &a);
    printf("Enter the value of coefficient of x: \n");
    scanf("%d", &b);
    printf("Enter the value of constant term: \n");
    scanf("%d", &c);
    int discriminat = (b * b) - 4 * a * c;
    if (discriminat < 0)
        printf("Roots are imaginary.\n");
    else if (discriminat == 0)
    {
        printf("Real and Equal Roots.\n");
        double root_1 = (-b + sqrt(discriminat)) / (2 * a);
        double root_2 = (-b - sqrt(discriminat)) / (2 * a);
        printf("Roots are %lf %lf\n ", root_1, root_2);
    }
    else
    {
        printf("Real and Distinct Roots.\n");
        double root_1 = (-b + sqrt(discriminat)) / (2 * a);
        double root_2 = (-b - sqrt(discriminat)) / (2 * a);
        printf("Roots are %lf %lf\n ", root_1, root_2);
    }
    getch();
}