/*
Prog 32.Write a program to convert decimal number in to binary number.

*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int decimal = 0;
    int binary = 0, b = 0;
    printf("Enter the number\n");
    scanf("%d", &decimal);
    printf("\nBinary Equivalent of %d is ", decimal);
    while (decimal != 0)
    {
        int r = decimal % 2;
        decimal = decimal / 2;
        b = (b * 10) + r;
    }
    // reversing binary : MSB to LSB
    while (b != 0)
    {
        binary = (binary * 10) + (b % 10);
        b = b / 10;
    }
    printf("%d", binary);
    getch();
}
