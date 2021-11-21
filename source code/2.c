#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 0, b = 0;
    printf("%s", "Enter the first number:");
    scanf("%d", &a);
    printf("%s", "Enter the second number:");
    scanf("%d", &b);
    printf("%s%d","Sum = ", a + b);
    getch();
}
