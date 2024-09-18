/*
name:Disu makadiya
date:2 august 2024
aim:to compute total budget on even days function
*/

#include<stdio.h>
void main()
{
  int i,a=0,m;
  //bill amount=a;
  //m= day enter;
  printf("enter the value of even day program");
  scanf("%d",&m);

  //nested loop statement 
for(i=1;i<=m;i++)
 {
   if(m%2==0)
     {
        printf("program is on even day");
        a+=200;
     }
 }
  //display total budget 
 printf("your budget is %d",a);
  printf("name-Disu Makadiya  id-24ce062");
}
