/*Prog 44. Define a structure that can describe a hotel. It should have the member 
that includes the name, address, grade, room charge and number of rooms. 
Write a function to print out hotel of given grade in order of room charges. */

#include <stdio.h>
#include <string.h>
#include <conio.h>
struct Hotel
{
    char name[20];
    char address[30];
    char grade[3];
    double roomCharge;
    int numberOfRoom;
};

void main()
{
    int entries;
    printf("%s","Enter the number of entries:");
    scanf("%d",&entries);
    struct Hotel h1[entries];
    int roomChargeArray[3];
    char grade[3];
    for (int i = 0; i < entries; i++)
    {
        printf("Enter the details of hotel of %d\n",i+1);
        fflush(stdin);
        printf("%s\n", "Enter the name of hotel:");
        gets(h1[i].name);
        printf("%s\n", "Enter the address of hotel:");
        gets(h1[i].address);
        printf("%s\n", "Enter the grade of hotel:");
        gets(h1[i].grade);
        printf("%s\n", "Enter the room charge:");
        scanf("%lf", &h1[i].roomCharge);
        printf("%s\n", "Enter the number of rooms:");
        scanf("%d", &h1[i].numberOfRoom);
        fflush(stdin);
    }
    printf("%s", "Enter the grade:");
    scanf("%s", &grade);
    for (int i = 0; i < 3; i++)
    {

        if (strcmpi(grade, h1[i].grade) == 0)
        {
         printf("HOTEL NAME: %s\n", h1[i].name);
         printf("ROOM CHARGE: %lf",h1[i].roomCharge);
        }
            
    }
}
