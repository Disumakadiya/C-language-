/*
NAME:Disu makadiya
DATE OF EXCEUTION:18-oct'24
AIM:display details of coach & team structure by using nested functions
*/

#include<stdio.h>
#include<string.h>

struct sports_Team
{
    char team_Name[15];
    char sports_Type[15];

    struct coach_Details
    {
        char coach_Name[10];
        int coach_Age;
        float coach_Exp;
    }c;
}t;

void Addteam_coach(struct sports_Team [],int);
void displayteam_coachData(struct sports_Team x[],int,char []);

void main()
{
    int i,n;
    char search_sport[15];
    struct sports_Team t[7];
    printf("ENTER THE NO. OF TEAMS");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        Addteam_coach(t,i);
    }
        printf("search the sport type:");
        scanf("%s",&search_sport);

    for(i=0;i<n;i++)
    {
        displayteam_coach(t,i,search_sport);
    }

}

void Addteam_coach(struct sports_Team x[],int n)
{
    printf("ENTER THE TEAM NAME:\n");
    fflush(stdin);
    gets(x[n].team_Name);

    printf("ENTER THE SPORTS TYPE(football,basketball):\n");
    fflush(stdin);
    gets(x[n].sports_Type);

    printf("ENTER THE COACH NAME:\n");
    fflush(stdin);
    gets(x[n].c.coach_Name);

    printf("ENTER THE COACH AGE:\n");
    scanf("%d",&x[n].c.coach_Age);

    printf("ENTER EXPERIENCE OF COACH:\n");
    scanf("%f",&x[n].c.coach_Exp);

}

void displayteam_coachData(struct sports_Team x[];int n,char s[])
{
    if(!strcmp(x[n].sports_Type,s))
    {
        printf("the team name is:\n");
        puts(x[n].team_Name);

        printf("the coach name is:\n");
        puts(x[n].c.coach_Name);

        printf("the coach age is: %d\n",x[n].c.coach_Age);

        printf("coach exp.is:%.2f\n",x[n].c.coach_Exp);
    }
}
