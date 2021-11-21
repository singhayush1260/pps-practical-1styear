/*
Write a program to find sum of Fibonacci series using function.
*/
#include <stdio.h>
#include <conio.h>
int fibonacci(int);
void main()
{
    int n=0,sum=0;
    printf("Enter the range:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sum=sum+fibonacci(i);
    }
    printf("Sum= %d",sum);
    getch();
}
int fibonacci(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return (fibonacci(n-1)+fibonacci(n-2));
}



