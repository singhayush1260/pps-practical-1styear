/* Program 38 : Write a program to print the multiplication of two N*N (Square) matrix*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int r1, r2, c1, c2;
    printf("%s", "Enter the order of first matrix:");
    printf("\n%s", "Enter the number of rows of first matrix:");
    scanf("%d", &r1);
    printf("\n%s", "Enter the number of columns of first matrix:");
    scanf("%d", &c1);
    printf("\n%s", "Enter the order of second matrix:");
    printf("\n%s", "Enter the number of rows of second matrix:");
    scanf("%d", &r2);
    printf("\n%s", "Enter the number of columns of second matrix:");
    scanf("%d", &c2);

    if (c1 == r2)
    {
        int mat1[r1][c1];
        int mat2[r2][c2];
        printf("%s\n", "Enter the Elements of first matrix:");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%s\n", "Enter the element:");
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("%s\n", "Enter the Elements of second matrix:");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%s\n", "Enter the element:");
                scanf("%d", &mat2[i][j]);
            }
        }
        int matPro[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                matPro[i][j]=0;
                for (int k = 0; k < r2; k++)
                {
                    matPro[i][j] = matPro[i][j] +( mat1[i][k] * mat2[k][j]);
                }
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", matPro[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("%s", "Matrix multiplication not valid because number of columns of 1st Matrix is not equal to row of 2nd matrix.");
    }
    getch();
}