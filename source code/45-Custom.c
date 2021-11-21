/*
Prog 45. Define a structure called cricket with player name, team name, batting 
average, for 50 players & 5 teams. Print team wise list contains names of 
player with their batting average. 
*/
#include <stdio.h>
#include <string.h>
struct Cricket
{
    char playerName[11][20];
    char teamName[20];
    double battingAverage[11];
};
void displayDetails();
void takeInput();
void dataEntryMenu();
struct Cricket team1, team2, team3, team4, team5;
void main()
{
    
    int choice = 0;
    int c = 1;

    printf("%s", "DETAILS ENTERING PORTAL\n");

    do
    {
        printf("\n%s", "PRESS 1: TEAM 1");
        printf("\n%s", "PRESS 2: TEAM 2");
        printf("\n%s", "PRESS 3: TEAM 3");
        printf("\n%s", "PRESS 4: TEAM 4");
        printf("\n%s", "PRESS 5: TEAM 5");
        printf("\n%s", "PRESS 6: QUIT");
        printf("\n%s", "ENTER TOUR CHOICE:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            takeInput(&team1);
            break;
        case 2:
            takeInput(&team2);
            break;
        case 3:
            takeInput(&team3);
            break;
        case 4:
            takeInput(&team4);
            break;
        case 5:
            takeInput(&team5);
            break;
        case 6:
            c = 0;
            printf("%s", "THANK YOU.");
            break;
        default:
            printf("%s", "WRONG INPUT");
        }
    } while (c != 0);
}
void takeInput(struct Cricket *temp)
{
    char tname[20];
    char pname[20];
    double batAvag = 0;
    printf("%s", "Enter the team name:");
    scanf("%s", &tname);
    strcpy(temp->teamName, tname);
    printf("\nEnter player details of team %s:", tname);
    for (int i = 1; i <= 3; i++)
    {
        printf("\nEnter player %d :", i);
        scanf("%s", &pname);
        strcpy(temp->playerName[i], pname);

        printf("\nEnter batting average of player %d: ", i);
        scanf("%lf", &batAvag);
        temp->battingAverage[i] = batAvag;
    }
}

void displayDetails(struct Cricket *temp)
{
    printf("%s", "====================================");
    printf("\n\tTEAM: %s\n", temp->teamName);
    printf("%s", "====================================");
    printf("\n\n%s", "PLAYER NAME\tBATTING AVERAGE\n");
    printf("%s", "------------------------------------\n");
    for (int i = 1; i <= 3; i++)
    {
        printf("\n%s\t\t", temp->playerName[i]);
        printf("%lf\n", temp->battingAverage[i]);
    }
}
/*void dataEntryMenu(struct Cricket *temp)
{

}*/