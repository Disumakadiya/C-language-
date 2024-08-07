 /*
Name: DISU MAKADIYA
date of program: 5th august,2024
aim : to play the matchstick game
*/

#include<stdio.h>
void main()
{
 int player,x,matchstick=21,computer;

    printf("THE GAME STARTS WITH 21 MATCHSTICKS\n");
    printf("THE USER WILL PICK 1,2,3 OR 4 STICKS\n");
    printf("AFTER THE USER PICKS,THE COMP MAKES ITS PICK\n");



 while(matchstick>1)
       {
         printf("enter your number:");
         scanf("%d",&player);
         computer=5-player;
         printf("computer has chosen %d\n",computer);
         matchstick =(computer+player);
         printf("matchstick left %d\n",matchstick);

       }
       if(matchstick==1)
       {
         printf("you lost the game");
       }
}
