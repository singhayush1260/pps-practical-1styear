/*
Write a program to compare two given dates. To store a date uses a
     structure that contains three members namely day, month and year. If the
     dates are equal then display message equal otherwise unequal.
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
struct Date
{
  int day;
  char month[10];
  int year;
};

void takeInput();
void main()
{
  struct Date date1, date2;

  printf("%s", "Enter the dates of event 1:\n");
  takeInput(&date1);
  printf("%s", "Enter the dates of event 2:\n");
  takeInput(&date2);
  int checkMonth = strcmp(date1.month, date2.month);
  if (date1.day == date2.day && checkMonth == 0 && date1.year == date2.year)
  {
    printf("%s", "Both dates are equal.");
  }
  else
  {
    printf("%s", "Both dates are not equal.");
  }
  getch();
}

void takeInput(struct Date *temp)
{
  int t = 0;
  char a[10];
  printf("%s", "Enter the day:");
  scanf("%d", &t);
  temp->day = t;
  printf("%s", "Enter the month:");
  scanf("%s", a);
  strcpy(temp->month, a);
  printf("%s", "Enter the year:");
  scanf("%d", &t);
  temp->year = t;
}