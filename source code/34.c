/*
Prog 34. Write a program to delete duplicate element in a list of 10 elements & display it on screen. 
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    int size = 0;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    int ar[size];

    for (int i = 0; i < size; i++)
    {
        printf("%s", "Enter the element:");
        scanf("%d", &ar[i]);
    }
    printf("%s%d", "Size before deleting duplicate elements: ", size);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ar[i] == ar[j])
            {
                while (j < size - 1)
                {
                    ar[j] = ar[j + 1];
                    j++;
                }
                size--;
            }
        }
    }
    printf("\n%s%d", "Size after deletion: ", size);
    printf("\nArray after deleting duplicate elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d%s", ar[i], " ");
    }
    getch();
}
