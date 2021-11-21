#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
    double basic_salary, hra, da, pf;
    printf("Enter the basic salary: \n");
    scanf("%lf", &basic_salary);
    da = 0.25 * basic_salary;
    hra = 0.15 * basic_salary;
    double gross_salary = basic_salary + da + hra;
    pf = 0.1 * gross_salary;
    double net_salary = basic_salary - pf;
    printf("Net Salary: %lf", net_salary);
    getch();
}