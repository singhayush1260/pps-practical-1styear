
#include <stdio.h> 
#include <conio.h> 
void main() 
{ 
    int a; 
  
    printf("Enter the number a: "); 
    scanf("%d", &a); 
  
    if (a > 0) 
        printf("%d is positive.", a); 
    else if (a < 0) 
        printf("%d is negative.", a); 
    else if (a == 0) 
        printf("%d is zero.", a); 
  
    getch();
} 