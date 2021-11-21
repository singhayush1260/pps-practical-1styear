#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
void main()
{
    int *ar;
    ar=calloc(5,sizeof(int));
    int largest=0;
    for (int i = 0; i < 5; i++)
    {
        printf("%s", "Enter the element:");
        scanf("%d", &ar[i]);
        if(ar[i]>largest)
        {
            largest=ar[i];
        }
    }
    printf("%s %d","Largest Integer: ",largest);
    getch();
}



	