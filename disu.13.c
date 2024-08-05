/*
name:Disu makadiya
date:2 august 2024
aim:to generate and display multiplication table 
*/

#include<stdio.h>
void main()
{
   int r,c,R,C;
   //R= total rows;
   //C= total colums;

   //display row with r
   printf("enter the no. of rows");
   scanf("%d",&R);
   //display column with c 
   printf("enter the no. of columns");
   scanf("%d",&C);

   for(r=1;r<=R;r++)
   {
       for(c=1;c<=C;c++)
       {
          printf("%4d",r*c);
       }
       printf("\n");
   }
}
