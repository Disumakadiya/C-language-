/*
Name: DISU MAKADIYA
date of program: 5th august,2024
aim : to display the pattern
*/

#include<stdio.h>
void main
(
  //taking r=rows and c= columns
   int r,c;
   // using nested loops
   for(r=1 ;r<=5 ;r++)
  {
      for(c=1 ;c<=r ;c++)
    //using if-else statement
      {
      if(c%2==0)
      {
        printf("%3d",0);
      }
      else
      {
        printf("%3d",1);
      }
      }
    //display the pattern
  printf("\n");
  }
printf("name-DISU MAKADIYA id-24ce062");
}
