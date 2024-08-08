/*
Name:Disu makadiya
date 0f program:10 july 2024
aim: to calculate the simple interset
*/

#include<stdio.h>

void main()
{
    //input value
    //P=PRINCIPAL;
    //R=RATE;
    //T=time in years;

    //display value of simple interset
   int P,I;
   float R,T;

   P=50,000;
   R=5.5;
   T=3 ;
  // ENTER THE VALUE OF GIVEN VARIABLEs

   //formula to display I;
   I=(P*R*T)/100;

   printf("simple interset is %f",I);
}
