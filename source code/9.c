#include <stdio.h>
#include <conio.h>
void main()
{
int a=0,b=0,c=0,largest=0;
    printf("%s", "Enter the first number:");
    scanf("%d", &a);
     printf("%s", "Enter the second number:");
    scanf("%d", &b);
     printf("%s", "Enter the third number:");
    scanf("%d", &c);
     if(a==b&&b==c)
     {
       printf("All are equal.");
     }
     else{
         if(a>b)
     {
        if(a>c)
        {
            largest=a;
        }
        else
        {
          largest=c;
        }
     }
     else
     {
        if(b>c)
        {
            largest=b;
        }
        else
        {
          largest=c;
        }
     }
     printf("Largest Integer: %d",largest);
     }
  getch();
}