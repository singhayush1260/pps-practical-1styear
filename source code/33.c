/*
Prog 33.Write a program to convert binary number in to decimal number.
*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int decimal = 0;
    int binary = 0;
    printf("Enter the binary number\n");
    scanf("%d", &binary);
    int temp=0;// to store bin while reversing it
    printf("\nDecimal equivalent of %d is ",binary);
    while(binary>0)
    {
        int r=binary%10;
        temp=temp*10+r;
        binary=binary/10;
    }
    binary=temp;
    while(binary>0)
    {
    decimal=decimal*2+(binary%10);
    binary=binary/10;
    }
    printf("%d",decimal);
    getch();
}