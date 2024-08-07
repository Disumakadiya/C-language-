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
   fflush(stdin);
   scanf("%d",&m);

//condition of ternary operator
(m>=90)
   ?(printf("grade A"))
   :(m>=80)
       ?(printf("grade B"))
       :(m>=70)
           ?(printf("grade C"))
           :(m>=60)
                ?(printf("grade D"))
                :(m<=60)
                     ?(printf("grade E"))
                     : printf("enter input is invalid");
                     //print grade
}
