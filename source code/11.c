#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 0, b = 0, x = 0, n = 0, y = 0;
    printf("%s", "Enter the value of a:");
    scanf("%d", &a);
    printf("%s", "Enter the value of b:");
    scanf("%d", &b);
    printf("%s", "Enter the value of x:");
    scanf("%d", &x);
    printf("%s", "Enter the value of n[1,4]:");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        y = (a * x) % b;
        break;
    case 2:
        y = (a * x * 2) + b * b;
        break;
    case 3:
        y = a - (b * x);
        break;
    case 4:
        y = a + (x / b);
        break;
    default:
        printf("%s", "The value of n must be between [1,4]");
    }
    printf("Y = %d", y);
    getch();
}