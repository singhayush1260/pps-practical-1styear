#include <stdio.h>
#include <conio.h>
void main()
{
	int n = 0;
	printf("%s\n", "Enter the order of matrix:");
	scanf("%d", &n);
	int matrix_original[n][n];
	int matrix_transpose[n][n];
	int symmetric = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%s\n", "Enter the element:");
			scanf("%d", &matrix_original[i][j]);
			matrix_transpose[j][i] = matrix_original[i][j];
			if (matrix_transpose[j][i] != matrix_original[i][j]);
			{
				symmetric = 0;
			}
		}
	}
	// printing orginal array
	printf("%s\n", "Printing Orginal Array:");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", matrix_original[i][j]);
		}
		printf("\n");
	}

	//printing trasposed array
	printf("%s\n", "Printing Transposed Array:");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", matrix_transpose[i][j]);
		}
		printf("\n");
	}
	if (symmetric == 0)
	{
		printf("The matrix is symmetric.");
	}
	else
	{
		printf("The matrix is not symmetric.");
	}
	getch();
}
/*

	int j = 0;
	for (int i = 0; i < n; i++)
	{
		while (j < n)
		{
			int temp = ar[i][j];
			int a = ar[j][i];
			ar[i][j] = a;
			ar[j][i] = temp;
			j++;
		}
		j = i + 1;
	}

*/