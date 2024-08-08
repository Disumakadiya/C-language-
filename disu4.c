/*
Name:DISU MAKADIYA
date of program:15 july 2024
aim: calculate the count for illeterate men and women
*/

#include<stdio.h>
void main()
{
   //total population of bharat in 2024
   long total_population=1441981744;

   //total women population
   double total_rate_of_women=48.4;

   //total literacy rate
   double total_literacy_rate=85.95;

   //literacy rate of men population
   double total_literacy_rate_men=80.95;

   //literacy rate of women population
   double total_literacy_rate_women=62.84;

   //calculate number of men and women
   long total_women=(total_rate_of_women*total_population)/100;
   long total_men=total_population-total_women;

   //calculate number of literacy men and women
   long total_literacy_women=(total_literacy_rate_women*total_women)/100;
   long total_literacy_men=(total_literacy_rate_men*total_men)/100;

   //calculate number of illiterate men and women
   long total_illiterate_women=total_literacy_women;
   long total_illiterate_men=total_literacy_men;

   //results
   printf("total population of bharat in 2024:%ld\n",total_population);
   printf("total women:%ld\n",total_women);
   printf("total men:%ld\n",total_men);
   printf("total literacy women:%ld\n",total_literacy_women);
   printf("total literacy men:%ld\n",total_literacy_men);
   printf("total illiterate women:%ld\n",total_illiterate_women);
   printf("total illiterate men:%ld\n",total_illiterate_men);

   }
