#include <stdio.h>
#include <conio.h>
void main()
{
    char operator;
    double operand1, operand2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    if (operator== '+' || operator== '-' || operator== '*' || operator== '/')
    {
        printf("Enter first operand: ");
        scanf("%lf", &operand1);
        printf("Enter second operand: ");
        scanf("%lf", &operand2);

        switch (operator)
        {
        case '+':
            printf("%lf", operand1 + operand2);
            break;
        case '-':
            printf("%lf", operand1 - operand2);
            break;
        case '*':
            printf("%lf", operand1 * operand2);
            break;
        case '/':
            printf("lf", operand1 / operand2);
            break;
        }
    }
    else
    {
        printf("Invalid Operator.");
    }
    getch();
}