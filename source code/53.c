
#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{

    int n = atoi(argv[1]);
    int f=1;
	for (int i=1;i<=n;++i)
	{
		f=f*i;
	}
    printf("Factoial of %d is: %d ",n,f);
    return 0;
    getch();
}


