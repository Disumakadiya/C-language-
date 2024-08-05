/*
name:Disu makadiya
date:2 august 2024
aim:
*/

#include<stdio.h>
void main()
{
  int i,a=0,m;
  //bill amount=a;
  //m= day enter;
  printf("enter the value of even day program");
  scanf("%d",&m);
for(i=1;i<=m;i++)
 {
   if(m%2==0)
     {
         printf("program is on even day");
         a+=200;
     }
 }
 printf("your budget is %d",a);
}
