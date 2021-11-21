#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int order = 0, n = 0;
    int **array;
    printf("%s", "Enter the order of array:");
    scanf("%d", &order);
    array= (int **) calloc(order,sizeof(int*));
    for (int i = 0; i < order; i++)
    {
       array[i]= (int *) calloc(order,sizeof(int));
    }
    for (int i = 0; i < order; i++)
    {
    for (int j = 0; j < order; j++)
        {
            printf("%s", "Enter the element:");
            scanf("%d", &array[i][j]);
        }
    }
    // printing orginal array
	printf("%s\n", "Printing Orginal Array:");
	for (int i = 0; i < order; i++)
	{
		for (int j = 0; j <order; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
    int j = 0;
	for (int i = 0; i < order; i++)
	{
		while (j <order)
		{
			int temp = array[i][j];
			array[i][j] =array[j][i];
			array[j][i] = temp;
			j++;
		}
		j = i + 1;
	}
    // printing transposed array
	printf("%s\n", "Printing Transposed Array:");
	for (int i = 0; i < order; i++)
	{
		for (int j = 0; j < order; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
    getch();
}


   


/*

   for (int j = 0; j < order; j++)
        {
            printf("%s", "Enter the element:");
            scanf("%d", &n);
            *(arr + i * order + j) = n;
        }
    }

     for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            printf("%d ", *(arr + i * order + j));
        }
        printf("\n");
    }
    int j = 0;
	for (int i = 0; i < n; i++)
	{
		while (j < n)
		{
			int temp = *(arr + i * order + j);
			*(arr + i * order + j) =*(arr + j * order + i) ;
			*(arr + j * order + i)= temp;
			j++;
		}
		j = i + 1;
	}
         
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            printf("%d ", *(arr + i * order + j));
        }
        printf("\n");
    }
    */

