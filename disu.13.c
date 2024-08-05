/*
name:Disu makadiya
date:2 august 2024
aim:21 matchstick program
*/

#include<stdio.h>
void main()
{
   int r,c,R,C;
   //r=rows;
   //c=colums;

   printf("enter the no. of rows");
   scanf("%d",&R);
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
