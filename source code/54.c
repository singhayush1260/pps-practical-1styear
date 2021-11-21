#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{

    int n = atoi(argv[1]);
    int sum=0,k=n;
	while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    printf("Sum of digits of %d is: %d ",k,sum);
    return 0;
    getch();
}


