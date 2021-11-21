
/*
Prog 35. Write a program to merge two sorted array &
 no element is repeated during merging. 
*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int size1 = 0, size2 = 0, i = 0;
    printf("%s", "Enter the size of first array:");
    scanf("%d", &size1);
    int array1[size1];
    printf("%s", "Enter the elements of first array:\n");
    for (i = 0; i < size1; i++)
    {
        printf("%s", "Enter the element:");
        scanf("%d", &array1[i]);
    }
    printf("%s", "Enter the size of second array:\n");
    scanf("%d", &size2);
    int array2[size2];
    for (i = 0; i < size2; i++)
    {
        printf("%s", "Enter the element:");
        scanf("%d", &array2[i]);
    }
    int mergedArraySize = size1 + size2;
    int mergedArray[mergedArraySize];
    int k = 0;
    for (i = 0; i < size1; i++)
    {
        mergedArray[k] = array1[i];
        k++;
    }
    for (i = 0; i < size2; i++)
    {
        mergedArray[k] = array2[i];
        k++;
    }
    for (int i = 0; i < mergedArraySize; i++)
    {
        for (int j = i + 1; j < mergedArraySize; j++)
        {
            if (mergedArray[i] == mergedArray[j])
            {
                while (j < mergedArraySize - 1)
                {
                    mergedArray[j] = mergedArray[j + 1];
                    j++;
                }
                mergedArraySize--;
            }
        }
    }
    for (i = 0; i < mergedArraySize; i++)
    {
        printf("%d ", mergedArray[i]);
    }
}