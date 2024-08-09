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
 int r,c,n;
 char x;

 printf("enter the value of row");
 scanf("%d",&n);

 //used nested loop
 for(r=1;r<=n;r++)
 {
    for(c=1;c<=n-r;c++)
    {
        printf("   ");
    }
    x='A';
    for(c=(n-r+1);c<=n;c++)
    {
        printf("%3c",x);
        x++;
    }
    x=x-2;
    for(c=1;c<=(r-1);c++)
    {
        printf("%3c",x);
        x--;
    }
    printf("\n");
 }
 //display pattern
}
