/*
Prog 45. Define a structure called cricket with player name, team name, batting 
average, for 50 players & 5 teams. Print team wise list contains names of 
player with their batting average. 
*/
#include <stdio.h>
#include <string.h>
struct Cricket
{
    char playerName[2][20];

    char teamName[20];
    double battingAverage[2];
};
void main()
{
    struct Cricket team[5];
    for(int i=0;i<2;i++)
    {
    printf("Enter the team name:");
    scanf("%s", &team[i].teamName);
    for(int j=1;j<=2;j++)
    {
    printf("Enter the name of Player %d:",j);
    scanf("%s", &team[i].playerName[j]);
    printf("Enter the batting average of Player %d:",j);
    scanf("%s", &team[i].battingAverage[j]);    
    }
    }

     for(int i=0;i<2;i++)
    {
 
    printf("%s\n", team[i].teamName);
   
    for(int j=1;j<=2;j++)
    {
    printf("%s ",team[i].playerName[j]);
    printf("Batting Average: %lf:\n",team[i].battingAverage[j]);  
    }
    }
}