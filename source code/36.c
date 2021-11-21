#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void fillArray();
int sumArray();
int *ar[0];
int order = 0;
int sum = 0; // to store the sum of diagonal elemets of two arrays
void main()
{

  printf("%s\n", "Enter the order of first array");
  fillArray();
  sum = sumArray();
  printf("%s\n", "Enter the order of second array");
  fillArray();
  sum = sum + sumArray();
  printf("%s%d\n", "The sum of diagonal elements of two array is: ", sum);
  getch();
}
void fillArray()
{
  scanf("%d", &order);
  ar[order];
  for (int i = 0; i < order; i++)
  {
    ar[i] = (int *)calloc(order, sizeof(int));
  }
  for (int i = 0; i < order; i++)
  {
    for (int j = 0; j < order; j++)
    {
      printf("%s\n", "Enter the element:");
      scanf("%d", &ar[i][j]);
    }
  }
}
int sumArray()
{
  int sum = 0;
  for (int i = 0; i < order; i++)
  {
    for (int j = 0; j < order; j++)
    {
      if (i == j)
      {
        sum = sum + ar[i][j];
      }
    }
  }
  return sum;
}