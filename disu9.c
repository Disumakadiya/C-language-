/*
Name: DISU MAKADIYA
date of program: 29th july,2024
aim : to display the grade
*/

#include<stdio.h>
void main()
{
   int m;
   printf("ENTER THE MARKS");
   scanf("%d",&m);
   if(m>=90)
    {
       printf("grade A");
    }
   else if(m>=80)
    {
       printf("grade B");
    }
   else if(m>=70)
    {
       printf("grade C");
    }
   else if(m>=60)
    {
       printf("grade D");
    }
   else
    {
        printf("grade E");
    }
}
