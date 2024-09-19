/*
Name:DISU MAKADIYA
date of program:9 AUGUST 2024
aim :TO DISPLAY PATTERN
*/

#include<stdio.h>
void main()
{

     //declare variable
     //r=row//c=columns
     //n=no. of rows
 int r,c,x,n;
 printf("ENTER THE NO.OF ROWS:");
 scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=n-r;c++)
    {
        printf(" ");
    }
    x=1;
    for(c=(n-r+1);c<=n;c++)
    {
        //displaying the pattern
        printf("%2d",x);
        x++;
    }
     printf("\n");
  }
       printf("name-DISU MAKADIYA  id-24ce062");
}
