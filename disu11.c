/*
Name: DISU MAKADIYA
Dare of program: 2 August 2024
aim: to play the matchstick game
*/

#include<stdio.h>
void main()
{
    int user,comp,x,sticks;
//matchstick game
    printf("THE GAME STARTS WITH 21 MATCHSTICKS\n");
    printf("THE USER WILL PICK 1,2,3 OR 4 STICKS\n");
    printf("AFTER THE USER PICKS,THE COMP MAKES ITS PICK\n");

    while(1)
    {
        printf("select the sticks=\n");
        scanf("%d",&user);
//ask to select sticks
        if(user<1 || user>4)
        {
           printf("invalid\n");
           continue;
        }
        //user only selects 0,1,2,3,4 sticks
        printf("you select %d matchstick\n",user);
        sticks=sticks-comp;
        printf("remaining matchstick is %d \n",sticks);
        comp=5-user;
        printf("computer select %d matchstick\n",comp);
        sticks=sticks-user;
        printf("remining matchstick is %d \n",sticks);

        //if statement used
        if(sticks==1)
        {
            printf("remainig matchstick is \n %d",sticks);
            printf("you lose the game.");
            break;
        }
    }
    printf("Name-DISUMAKADIYA  id-24ce062");
}

