
/*

Prog. 50 (b): To reverse the string through pointer.

*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
void reverseString(char *);
void reverseString(char *ar)
{
 int l=strlen(ar);
 char ch;
 char *startPtr,*endPtr;
 startPtr=ar;
 endPtr=ar;
 for(int i=0;i<l-1;i++)
 {
     endPtr++;
 }
 for(int i=0;i<(l/2);i++)
 {
   ch=*endPtr;
   *endPtr=*startPtr;
   *startPtr=ch;
   startPtr++;
   endPtr--;
}
}
void main()
{
   
   char ar[20];
   printf("%s","Enter the string:");
   gets(ar);
   reverseString(ar);
   printf("Reversed String: %s",ar);
   getch();
}


OUTPUT:

Enter the string:ghebdca
Reversed String: acdbehg