#include <stdio.h>
#include <conio.h>
void main()
{

    float f, c;
    int choice;
    printf("Temperature Conversion Portal\n");
    printf("\nPress 1: Fahrenheit to Celsius.");
    printf("\nPress 2:  Celsius to Fahrenheit.\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f", &f);
        c = (f - 32) / 1.8;
        printf("\nTemperature in Celsius: %f", c);
        break;
    case 2:
        printf("\nEnter temperature in Celsius: ");
        scanf("%f", &c);
        f = (c * 1.8) + 32;
        printf("\nTemperature in Fahrenheit: %.2f", f);
        break;
    default:
        printf("\nInvalid Choice !!!");
    }

    getch();
}
