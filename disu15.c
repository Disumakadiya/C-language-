/*
Name:Disu Makadiya
Date Of Implementation:30th august2024
AIM:to determine positive,negative,even and odd no.s
*/

#include<stdio.h>
void main()
{
    //a=addition
    //b=subtraction
    //c=multiplication
    //d=division
    int A[25],i,a=0,b=0,c=0,d=0;
    for(i=0;i<25;i++);
    {
        //enter value
    printf("ENTER THE NO. OF INPUTS %d ",i);
    scanf("%d",&A[i]);
    }
    for(i=0;i<25;i++)
{   
    //if loop
   if(A[i]%2==0)
   {
   printf("the no. is even");
   a++;
   }  
   else
   {
   printf("the no. is odd");
   b++;
   }
   {
   if(A[i]>0)
   {
   printf("the no.is positive");
   c++;
   }
   else 
   {
    printf("the no. is negative");
    d++;
   }
       //count operations
   printf("no. of positive no. are %d \n",a);
 printf("no. of negative no.are %d \n",b);
 printf("no. of even are %d \n",c);
 printf("no. of odd are %d \n",d);
   }

   }
    printf("Naame-DISU MAKADIYA  id-24CE062");
}
