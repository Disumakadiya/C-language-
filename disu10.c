/*
Name: DISU MAKADIYA
date of program:
aim : to display the countdown timer
*/

#include<stdio.h>
void main()
{
  //display timer
  int second,x;
  printf("ENTER THE STARTING  SECOND FOR TIMER:");
  scanf("%d",&second);

    //used for loop
   for(x=second ;x>=0 ;x--)
   {
       printf("%2d\r",x);
       sleep(second);
   }
printf("countdown is over...");
printf ("---------------");
printf("Name-disu makadiya  id-24ce062");
}
