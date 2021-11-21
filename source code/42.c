#include<stdio.h>
#include<conio.h>
void main()
{
    char array[][6]={"ZERO\0","ONE\0","TWO\0","THREE\0","FOUR\0","FIVE\0"};
    int n=0,rev=0;
    char output[25];
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    while(rev!=0)
    {
        printf("%s ",array[rev%10]);
        rev=rev/10;
    }
}