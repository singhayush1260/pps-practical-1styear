#include<conio.h>
#include <stdio.h>

void main()
{
    int side1, side2, side3;

    
    printf("Enter the first side of the triangle: ");
    scanf("%d", &side1);
     printf("Enter the second side of the triangle: ");
    scanf("%d", &side2);
     printf("Enter the third side of the triangle:");
    scanf("%d",&side3);

    if(side1==side2 && side2==side3) 
    {
    
        printf("Equilateral triangle.");
    }
    else if(side1==side2 || side1==side3 || side2==side3) 
    {
     
        printf("Isosceles triangle.");
    }
    else 
    {
        
        printf("Scalene triangle.");
    }

   getch();
}