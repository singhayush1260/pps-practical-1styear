/*

 Write a program to receive marks of physics, chemistry & maths from user
    & check its eligibility for course if
           a) Marks of physics > 40
           b) Marks of chemistry > 50
           c) Marks of math’s > 60
           d) Total of physics & math’s marks > 150
               or
           e) Total of three subjects marks > 200

    */
#include <stdio.h>
#include <conio.h>
void main()
{
    int physics = 0, maths = 0, chemistry = 0;
    printf("%s", "Enter the marks of physics:");
    scanf("%d", &physics);
    printf("%s", "Enter the marks of maths:");
    scanf("%d", &maths);
    printf("%s", "Enter the marks of chemistry:");
    scanf("%d", &chemistry);
    int total = maths + physics + chemistry;
    if ((physics > 50 && maths > 60 && (maths + physics) > 150) || total > 200)
    {
        printf("%s", "You are eligible for the course.");
    }
    else
    {
        printf("%s", "You are not eligible for the course.");
    }
    getch();
}
